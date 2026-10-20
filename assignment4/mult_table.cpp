// Bryan Guevara
// Assignment 4

#include <iostream>                  
using namespace std;                 

int main() {                         //  program starts here
    int number;                      //  hold the user's number

    cout << "Enter a number: ";      // ask the user for a number
    cin >> number;                   // save what the user types

    for (int i = 1; i <= 10; i++) {  // i goes 1, 2, 3, up to 10
        cout << number << " x " << i // print the number times i
             << " = " << number * i  // print the answer
             << endl;                // go to the next line
    }                                // end of the loop

    return 0;                        //  program is done
}                                   
