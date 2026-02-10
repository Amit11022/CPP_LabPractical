#include<iostream>                         // Header file for input-output
using namespace std;                      // Use standard namespace

class BankAcc {                           // Abstract class
    protected:
        double balance;                   // Protected data member

    public:
        virtual void setbala(double b) = 0; // Pure virtual function
        virtual double getbala() = 0;       // Pure virtual function
};

class Bank : public BankAcc {             // Derived class
    public:
        void setbala(double b){            // Override abstract function
            balance = b;                  // Assign value to balance
        }

        double getbala(){                 // Override abstract function
            return balance;               // Return balance value
        }
};

int main() {
    Bank obj;                             // Object of derived class
    obj.setbala(100000);                  // Set account balance
    cout << obj.getbala();                // Display balance
}

// OUTPUT

// 100000
