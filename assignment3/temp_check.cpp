// Bryan Guevara
// Assignment 3

#include <iostream>          // for cin/cout
using namespace std;         // avoid writing std::

int main() {                 // program starts here
    int temp;                // stores the temperature

    cout << "Enter the temperature (F): ";  // ask for input
    cin >> temp;                            // read it in

    if (temp < 32) {                        // below 32
        cout << "That's Freezing." << endl; // print Freezing
    } else if (temp < 60) {                 // 32-59
        cout << "That's Cold." << endl;     // print Cold
    } else if (temp <= 75) {                // 60-75
        cout << "That's Mild." << endl;     // print Mild
    } else {                                // 76+
        cout << "That's Hot." << endl;      // print Hot
    }

    return 0;                // exit program
}