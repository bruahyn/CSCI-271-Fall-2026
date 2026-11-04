// Bryan Guevara
// Assignment 7

#include <iostream>   //  for cin and cout
using namespace std;  // write cout/cin 

int main() {
    const int SIZE = 8;                                  // elements in the array
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88};    // sorted array to search

    int target;                                          // the number the user wants to find
    cout << "Enter a number to search for: ";            // prompt the user
    cin >> target;                                       // reads the target

    int low = 0;                                         // leftmost index of the search range
    int high = SIZE - 1;                                 // rightmost index of the search range
    int foundIndex = -1;                                 // -1 means not found yet

    while (low <= high) {                                // keep searching while the range is not empty
        int mid = (low + high) / 2;                      // index of the middle element

        if (arr[mid] == target) {                        // middle element is the target
            foundIndex = mid;                            // where we found it
            break;                                       // stop searching
        } else if (arr[mid] < target) {                  // middle is smaller than target
            low = mid + 1;                               // target to bo to the right so move low up
        } else {                                         // middle is larger than target
            high = mid - 1;                              // target has to be to the left so move high down
        }
    }

    if (foundIndex != -1) {                              // foundIndex changed so it found it
        cout << target << " found at index " << foundIndex << endl;  // print the index
    } else {                                             // foundIndex is still -1
        cout << target << " not found" << endl;          // tell the user it is not in the array
    }

    return 0;                                            // program ends
}
