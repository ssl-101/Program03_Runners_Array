#ifndef RUNNERS_H
#define RUNNERS_H

#include <string>

//constants
const int NUM_RUNNERS = 5;
const int DAYS_OF_WEEK = 7;

//functions
bool readFile(const std::string& filename, 
     std::string names[], 
     double miles[][DAYS_OF_WEEK]);
void calculateTotals(const double miles[][DAYS_OF_WEEK], 
     double totals[],
     double averages[]);
void displayResults(const std::string names[],
     const double miles[][DAYS_OF_WEEK],
     const double totals[],
     const double averages[]);

 #endif                   
    