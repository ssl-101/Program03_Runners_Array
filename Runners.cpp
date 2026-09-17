#include "Runners.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool readRunnerData (const string& filename, string names[], double miles[][DAYS_OF_WEEK]){
    ifstream inFile(runners.txt);
    if (!inFile){
        return false;
    }

    for(int row = 0; row < NUM_RUNNERS; ++row){
        inFile >> names[row];
        for (int col = 0; col < DAYS_OF_WEEK; ++col){
            sum += miles[row][col];
        }
    }
    inFile.close();
    return true;
}
