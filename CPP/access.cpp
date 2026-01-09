#include<iostream>              
using namespace std;              

class rn{                          // Class named rn
    public:                        // Public access specifier
        void abc(){                // Member function abc
            int a = 10;            // Declare and initialize variable a
            cout << a;             // Print value of a
        }    
};

int main(){                        // Main function
    rn obj;                        // Create object of class rn
    obj.abc();                     // Call abc function using object
}                                 


//  OUTPUT

//  10
