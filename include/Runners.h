#ifdef RUNNERS_H
#define RUNNERS_H

#include <string>

//constants
const int NUM_RUNNERS = 5;
const int DAYS_OF_WEEK = 7;

//functions
bool readFile(const std::string& filename, string names[], double miles[][DAYS_OF_WEEK]);
void runTotals(const double miles[][DAYS_OF_WEEKS], double totals[]);
void runAverages(const double totals[], double averages[]);
void displayResults(const std;;string names[], const double miles[][DAYS_OF_WEEK],
                    const double totals[],const double averages[]);

 #endif                   
    