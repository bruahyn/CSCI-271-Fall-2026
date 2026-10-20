//Bryan Guevara
//Assignment 5

#include <iostream>                        
using namespace std;                       

int main() {                               // program starts here
    const int SIZE = 10;                   // array size
    int data[10] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};   // given array
    int target;                            // number to find
    int foundIndex = -1;                   // -1 means not found
    int count = 0;                         // how many times found

    cout << "Enter a number to search for: ";   // ask user
    cin >> target;                         // read number

    for (int i = 0; i < SIZE; i++) {       // look at each number
        if (data[i] == target) {           // is it a match?
            if (foundIndex == -1) {        // first match?
                foundIndex = i;            // save the index
            }
            count++;                       // add 1 to count
        }
    }

    if (foundIndex == -1) {                // never found
        cout << target << " was not found." << endl;
    } else {                               // found
        cout << target << " first found at index " << foundIndex << endl;
        cout << target << " appears " << count << " time(s)" << endl;
    }

    return 0;                              // end
}
