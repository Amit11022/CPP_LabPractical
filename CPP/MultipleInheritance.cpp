#include<iostream>         
using namespace std;     

class A{                   // class A
    public:
        void show(){        // function show of class A
            cout<<"A"<<endl;// print A
        }
};

class B{                   // class B
    public:
        void show(){        // function show of class B
            cout<<"B"<<endl;// print B
        }
};

class C: public A, public B{ // class C inherits A and B
};

int main(){                // main function
    C obj;                 // object of class C
    obj.A::show();         // call show() of class A
    obj.B::show();         // call show() of class B
}

// OUTPUT

// A
// B

