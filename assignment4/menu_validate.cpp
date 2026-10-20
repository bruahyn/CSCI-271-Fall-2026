// Bryan Guevara
// Assignment 4

#include <iostream>                  
using namespace std;                 

int main() {                         //  program starts here
    int choice;                      //  hold the user's choice

    do {                             // start the loop, it runs at least once
        cout << "Enter a menu choice (1, 2, or 3): "; // ask for a choice
        cin >> choice;               // save what the user types

        if (choice < 1 || choice > 3) {                // is it not 1, 2, or 3
            cout << "Invalid choice, try again." << endl; // say it is wrong
        }                            // end of the if
    } while (choice < 1 || choice > 3); // go again if the choice is wrong

    cout << "You selected option "   // print the first part of the message
         << choice << "."            // print the choice and a period
         << endl;                    // go to the next line

    return 0;                        // the program is done
}                                    
