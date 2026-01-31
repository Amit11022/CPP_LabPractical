#include<iostream>              
using namespace std;            

class sample {                  // Define class sample
    int value;                  // Data member to store value

public:
    sample(int v) {             // Parameterized constructor
        value = v;              // Assign value to data member
    }

    sample(const sample &obj) { // Copy constructor
        value = obj.value;      // Copy value from another object
    }

    void show() {               // Member function to display value
        cout << value << endl;  // Print value
    }
};

int main() {                    // Main function starts
    sample s1(10);              // Create object s1 with value 10
    sample s2 = s1;             // Copy s1 into s2 (copy constructor)
    s2.show();                  // Display value of s2
}

//  OUTPUT

//  10
