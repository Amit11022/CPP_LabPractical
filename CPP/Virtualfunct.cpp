#include<iostream>                         
using namespace std;                       

class Base {                               // Base class
    public:
        virtual void show(){               // Virtual function (needed for override)
            cout << "This is base class and it shows the function"; // Base version
        }
};

class Derived : public Base {              // Derived class
    public:
        void show() override {             // Override base class function
            cout << "This is derived class and it shows the function"; // Derived version
        }
};

int main(){
    Base* b;                               // Base class pointer
    Derived d;                             // Derived class object
    b = &d;                                // Base pointer points to derived object
    b->show();                             // Calls derived class function (runtime)
}

// OUTPUT

// This is derived class and it shows the function

