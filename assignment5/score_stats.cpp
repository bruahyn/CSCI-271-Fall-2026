//Bryan Guevara
//Assignment 5

#include <iostream>                        
using namespace std;                       

int main() {                               // program starts here
    const int SIZE = 5;                    // number of scores
    int scores[SIZE];                      // array for the scores
    int sum = 0;                           // sum starts at 0

    for (int i = 0; i < SIZE; i++) {       // read the scores
        cout << "Enter score " << i + 1 << ": ";   // ask for score
        cin >> scores[i];                  // save it
    }

    int highest = scores[0];               // max starts at first score
    int lowest = scores[0];                // min starts at first score

    for (int i = 0; i < SIZE; i++) {       // go through the scores
        sum = sum + scores[i];             // add to sum
        if (scores[i] > highest) {         // bigger than highest
            highest = scores[i];           // update highest
        }
        if (scores[i] < lowest) {          // smaller than lowest
            lowest = scores[i];            // update lowest
        }
    }

    double average = static_cast<double>(sum) / SIZE;   // keep the decimal

    cout << "Scores: ";                    // label
    for (int i = 0; i < SIZE; i++) {       // print the scores
        cout << scores[i] << " ";          // one score
    }
    cout << endl;                          // new line
    cout << "Sum: " << sum << endl;        // show sum
    cout << "Average: " << average << endl;    // show average
    cout << "Highest: " << highest << endl;    // show highest
    cout << "Lowest: " << lowest << endl;      // show lowest

    return 0;                              // end
}
