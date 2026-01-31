#include<iostream>              
using namespace std;          

class abc{                      // class abc
    public:
        int pqr(int i){         // function with one parameter
            return i;           // return value of i
        }
};

class xyz{                      // class xyz
    public:
        int pqr(int i,int j){   // function with two parameters
            return i + j;       // return sum of i and j
        }
};

int main(){                     // main function
    abc obj1;                   // object of class abc
    xyz obj2;                   // object of class xyz

    cout << obj1.pqr(5) << endl;    // call pqr of abc
    cout << obj2.pqr(5, 10) << endl;// call pqr of xyz
}


//  OUTPUT

//  5
// 15
