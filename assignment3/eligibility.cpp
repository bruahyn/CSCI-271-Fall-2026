// Bryan Guevara
// Assignment 3

#include <iostream>			 				// for cin/cout
using namespace std;						// avoid writing std::

int main() {						// program starts here

	int age;						// stores the user's age
	int membership;					// stores membership status
	
	cout << "Enter your age: ";		// ask for age
	cin >> age;						// reads age
	
	cout << "Are you a member? (1 = yes, 0 = no): ";		// ask membership
	cin >> membership;		// read membership
	
	if (age >= 18 && membership == 1 || age >=60) {			// checks for qualifying conditions
		cout << "You qualify for a discount." << endl;		// prints if user qualifies
	} 
	else {			// look for else if no qualifying conditions
		cout << "You do not qualify for a discount.";		// prints if user does not qualify
	}
	
	return 0; // program ends here
}
		
