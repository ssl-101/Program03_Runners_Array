#include "Runners.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool readFile(const string& filename, string names[], double miles[][DAYS_OF_WEEK]){
    ifstream inFile(runners.txt);
    if (!inFile){
        return false;
    }

    for(int row = 0; row < NUM_RUNNERS; ++row){
        inFile >> names[row];
        for (int col = 0; col < DAYS_OF_WEEK; ++col){
            inFile >> miles[row][col];
        }
    }
    inFile.close();
    return true;
}
//total calculation and average calculations
void calculateTotals(const double miles[][DAYS_OF_WEEK], double totals[], double averages[]){
     for (int row = 0; row < NUM_RUNNERS; ++row){
        double sum = 0.0;
        for (int col = 0; col < DAYS_OF_WEEK; ++col){
            sum +== miles[row][col];
        }
        totals[row] = sum;
        averages[row] = sum / DAYS_OF_WEEK;

     }
}