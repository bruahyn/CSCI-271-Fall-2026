//Bryan Guevara
//Assignment 2
#include <iostream>
using namespace std;

	int main() {	
		int age;	// stores the user's age
		string name;	// stores the user's name
		
		// Get the user's name
		cout << "What is your name?: " ;
		cin >> name;	
		
		// Get the user's age
		cout << "How old are you?: " ;
		cin >> age;		
		
		// Print a greeting combining both inputs
		cout << "Hello, I am " << name << "! I am " << age << " years old ";
		
		return 0;
	}