//Bryan Guevara
//Assignment 5

#include <iostream>                       
using namespace std;                       

void printForward(const int arr[], int size) {   // print in order
    for (int i = 0; i < size; i++) {       // first to last
        cout << arr[i] << " ";             // print one
    }
    cout << endl;                          // new line
}

void printReverse(const int arr[], int size) {   // print backwards
    for (int i = size - 1; i >= 0; i--) {  // last to first
        cout << arr[i] << " ";             // print one
    }
    cout << endl;                          // new line
}

int countAbove(const int arr[], int size, int limit) {   // count above limit
    int count = 0;                         // start at 0
    for (int i = 0; i < size; i++) {       // look at each one
        if (arr[i] > limit) {              // bigger than limit
            count++;                       // add 1
        }
    }
    return count;                          // give back the count
}

int main() {                               // program starts here
    const int SIZE = 6;                    // array size
    int values[SIZE] = {14, 3, 27, 9, 50, 21};   // given array
    int limit;                             // user's limit

    cout << "Forward: ";                   // label
    printForward(values, SIZE);            // print forward
    cout << "Reverse: ";                   // label
    printReverse(values, SIZE);            // print reverse

    cout << "Count values above: ";        // ask user
    cin >> limit;                          // read limit
    cout << "Count: " << countAbove(values, SIZE, limit) << endl;   // show count

    return 0;                              // end
}
