#include <iostream>
#include "Runners.h"

using namespace std;

int main() {
    string names[NUM_RUNNERS];
    double miles[NUM_RUNNERS][DAYS_OF_WEEK];
    double totals[NUM_RUNNERS];
    double averages[NUM_RUNNERS];

    if(readFile( "runners.txt", names, miles)){
        calculateTotals(miles, totals, averages);
        displayResults(names, miles, totals, averages);
    } else {
        cout << "Error: Could not open file 'runners.txt'." << endl;
        return 1;
    }

    return 0;
}