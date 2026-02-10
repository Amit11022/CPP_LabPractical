#include<iostream>                 
using namespace std;               

class Animal {                     // Base class
	public:
	  virtual void sound() {        // Virtual function for runtime polymorphism
			cout << "Animal make sound" << endl;  // Base class sound
		}
};

class Dog : public Animal {         // Derived class inheriting Animal
	public:
		void sound() {               // Overriding base class function
			cout << "Dog sound" << endl;  // Dog-specific sound
		}
};

int main() {
	Animal *a;                      // Base class pointer
	Dog d;                          // Derived class object
	a = &d;                         // Pointer points to Dog object
	a->sound();                     // Calls Dog's sound() at runtime
}

//  OUTPUT

//  Dog sound

