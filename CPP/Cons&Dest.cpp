#include<iostream>                 
using namespace std;              

class Student {                    // Define Student class
	private:
		int roll;                   // Data member to store roll number

	public:
	    Student() {                 // Default constructor
	    	roll = 0;               // Initialize roll to 0
	    	cout << "Default cons called" << endl;  // Message
		}	

		Student(int r) {            // Parameterized constructor
			roll = r;               // Assign value to roll
			cout << "Parameterized cons called" << endl; // Message
		}

		~Student() {                // Destructor
			cout << "Destructor called" << endl; // Message
		}

		void display() {             // Member function to display roll
			cout << "ROLL NO : " << roll << endl; // Print roll number
		}
};

int main() {
	cout << "create an object" << endl;  // Message before object creation
	Student s1;                          // Object using default constructor
	s1.display();                        // Display roll number

	cout << "create an object for Parameterized cons" << endl; // Message
	Student s2(10);                      // Object using parameterized constructor
	s2.display();                        // Display roll number
}



// OUTPUT

//  create an object
//  Deafault cons called
//  ROLL NO : 0
//  create an object for Parameterized cons
//  Parameterized cons called
//  ROLL NO : 10
//  Destructor called
//  Destructor called
