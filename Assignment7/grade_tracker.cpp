// Bryan Guevara
// Assignment 7

#include <iostream>   
#include <vector>     // needed vector 
using namespace std;

int main() {
    vector<int> grades;                                  // empty vector that will hold the grades

    int n;                                               // grades that user will enter
    cout << "How many grades? ";                         // prompt
    cin >> n;                                            // read number of grades

    for (int i = 1; i <= n; i++) {                       // loop once for each grade
        int grade;                                       // temp variable for the current grade
        cout << "Enter grade " << i << ": ";             // prompt
        cin >> grade;                                    // reads grade
        grades.push_back(grade);                         // add grade to the end of the vector
    }

    cout << "Grades:";                                   // label the list of grades
    for (int g : grades) {                               // for loop - g is each grade in turn
        cout << " " << g;                                // print a space then the grade
    }
    cout << endl;                                        // end

    cout << "Count: " << grades.size() << endl;          // size() how many grades are stored

    if (grades.size() > 0) {                             // do math if there is at least one grade
        int sum = 0;                                     // running total of all grades
        int highest = grades[0];                         // assuming the first grade is the highest
        for (int g : grades) {                           // visit every grade
            sum += g;                                    // add it to the total
            if (g > highest) {                           // grade beats the current highest
                highest = g;                             // update the highest
            }
        }
        double average = static_cast<double>(sum) / grades.size();  // cast double so division keeps decimals
        cout << "Average: " << average << endl;          // print average
        cout << "Highest: " << highest << endl;          // print highest grade
    } else {                                             // no grades were entered
        cout << "No grades entered." << endl;            // Print
    }

    return 0;                                            // program ends
}
