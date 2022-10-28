#include <iostream>
#include <iomanip>

using namespace std;

void printMatrix (int AirQuality_Index[][3], int nrows, int ncols);
int CountUnhealthySensitive(int AirQuality_Index [][3], int n_rows, int city_col)

int main() {

  const int nrows = 10;
  const int ncols = 3;

  int AirQuality_Index[nrows][ncols] = {{50, 68, 58}, {58, 115, 78}, {62, 110, 81},
{66, 124, 110}, {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91}, {27, 19, 59},
  {17, 13, 27}};

  printMatrix (AirQuality_Index, nrows, ncols);

  int SensitiveCount;
  int city_col;
  int Mean;

  cout << "Enter in a number to a corresponding city" << endl;

  cout << "Grand Junciton = 0, ";
  cout << "Fort Collins = 1, ";
  cout << "Denver/boulder = 2)";
  cin >> city_col;
  cout << endl;

  SensitiveCount = CountUnhealthySensitive(AirQuality_Index, nrows, city_col);

  
  }
int CountUnhealthySensitive(int AirQuality_Index [][3], int n_rows, int city_col){

int count = 0;
  bool AirQuality;
  int row, col;

  for (row = 0; row < n_rows; row ++){
    if (AirQuality_Index[row][city_col] >= 101 && AirQuality_Index[row][city_col]){
    AirQuality = true;
      count ++;
      }
    else
      AirQuality = false;
    }
  return count;
  }


void printMatrix (int AirQuality_Index[][3], int nrows, int ncols){
 cout << "Daily Air Quality for PM2.5 values by location" << endl; 
  for (int r = 0; r < nrows; r++){
    for(int c = 0; c < ncols; c++){
      cout << setw(8) << AirQuality_Index[r][c];
      }
    cout << endl;
    }
  return;
  }