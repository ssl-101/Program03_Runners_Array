#include "Runners.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool readFile(const string& filename, string names[], double miles[][DAYS_OF_WEEK]){
    ifstream inFile(filename);
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
            sum += miles[row][col];
        }
        totals[row] = sum;
        averages[row] = sum / DAYS_OF_WEEK;

     }
}
//Data display
void displayResults(const string names[], const double miles[][DAYS_OF_WEEK],
                  const double totals[], const double averages[]){
                    
  //column names
  cout << left << setw(11) <<"Name";
  for (int col = 1; col <= DAYS_OF_WEEK; ++col){
      cout << right <<setw(7) << ("Day" + to_string(col));
  }
  cout << setw(11) << "Total" << setw(11) << "Average" << "\n";

  // Rows for data

  cout << fixed << setprecision(2);
  for (int row = 0; row < NUM_RUNNERS; ++row) {
      cout << left << setw(11) << names[row];
      for (int col = 0; col < DAYS_OF_WEEK; ++col){
          cout << right << setw(7) << miles[row][col];
      }
      cout << setw(11) << totals[row] << setw(11) << averages[row] << "\n";
   }
}
            