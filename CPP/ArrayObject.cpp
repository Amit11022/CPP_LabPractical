#include<iostream>                     
using namespace std;                  

class Student{                         // Define Student class
	int Roll;                          // Data member to store roll number
	public:                            // Public access specifier
		void getData(int r){           // Function to get roll number
			Roll = r;                  // Assign value to Roll
		}
		void showData(){               // Function to display roll number
			cout << "Roll no:" << Roll << endl;  // Print roll number
		}
};

int main(){                           // Main function
	Student s[3];                     // Create array of 3 Student objects
	
	for(int i = 0; i < 3; i++){        // Loop to input data
       s[i].getData(i + 1);           // Set roll number
	}
	
	for(int i = 0; i < 3; i++){        // Loop to display data
		s[i].showData();               // Show roll number
	}
}


//  iOUTPUT

//  Roll no:1
//  Roll no:2
//  Roll no:3
