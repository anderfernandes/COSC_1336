/**
* Name: Anderson Fernandes
* Date: October 16, 2018
* Description: Programming Challenge 26: Using Files - Total and Average Rainfall
**/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  double total, average, counter, data;
  string firstMonth, lastMonth;

  ifstream fin;
  fin.open("Rainfall.txt");

  fin >> firstMonth;
  fin >> lastMonth;

  while(fin >> data)
  {
    counter++;
    total += data;
  }

  average = total / counter;

  cout << "During the months of "    << firstMonth << "-" << lastMonth
       << " the total rainfall was " << total      << " and the average monthly rainfall was "
       << average << " inches.";

  cin.get();
  cin.ignore();
  return 0;
}