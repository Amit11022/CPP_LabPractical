#include<iostream>                  
using namespace std;              

class student{                     // class student
    public:
        int add(int a, int b){      // add function with int parameters
            return a + b;           // return sum of integers
        }
        float add(float a, float b){// add function with float parameters
            return a + b;           // return sum of floats
        }
};

int main(){                         // main function
    student s;                      // object of class student
    cout << s.add(5, 3) << endl;    // calls int add()
    cout << s.add(2.5f, 3.4f) << endl; // calls float add()
}


// OUTPUT

// 8
// 5.9
