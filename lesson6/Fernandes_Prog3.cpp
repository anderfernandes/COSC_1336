/**
* Name: Anderson Fernandes
* Date: December 2, 2018
* Description: Programming Project 3
**/

#include <iostream>

using namespace std;

void   getData(int month, int amount, double data[]);
double totalRainfall(double data[], int s);
double averageRainfall(double data[], int s);
int    wettestMonth(double data[], int s);
int    driestMonth(double data[], int s);
void   showMenu();
string getMonth(int m);

int main()
{
  const int SIZE = 12; // 12 months in a year
  double rainfallData[SIZE]; // An array of data for each month
  double rainMonth, rainAmount; // The number of the month and the amount of rain
  int option; // User option from the main menu
  int driest; // Number of the month with least rain
  int wettest; // Number of the month with most rain
  
  // Loop back to the menu if input is wrong or user is done seeing/entering data
  do {
    showMenu();
    cin >> option;
    
    // Get rainfall data from the user
    if (option == 1) 
    {
      cout << "Enter the month you would like to enter rainfall data (1 ~ 12): " ;
      cin  >> rainMonth;
      cout << "Enter the amount of rainfall for month " << rainMonth << ": ";
      cin  >> rainAmount;
      getData(rainMonth, rainAmount, rainfallData);
      cout << endl;
      // Return to the main menu
      option = 3;
    }
    // Showing report
    else if(option == 2)
    {
      // Get driest month number
      driest  = driestMonth(rainfallData, SIZE);
      // Get wettest month number
      wettest = wettestMonth(rainfallData, SIZE);
      cout << endl;
      cout << "2015 Rainfall Report for Neversnows County" << endl << endl;
      cout << "Total Rainfall: "           << totalRainfall(rainfallData, SIZE)   << " inches" << endl; 
      cout << "Average monthly rainfall: " << averageRainfall(rainfallData, SIZE) << " inches" << endl;
      cout << "The least rain fell in "    << getMonth(driest)
           << " with "  << rainfallData[driest] << " inches" << endl;
      cout << "The most rain fell in "     << getMonth(wettest)
           << " with "  << rainfallData[wettest] << " inches" << endl; 
      cout << endl;
      // Return to the main menu
      option = 3;
    }
    // Break out of the loop and end program if user enters 0
    else if(option == 0)
      break;
    
  } while (option != 1 && option != 2);
  

  cin.ignore();
  cin.get();
  return 0;
}

// This function takes a month number, the amount of rainfall and the array with the data
void getData(int month, int amount, double data[])
{
  data[month - 1] = amount;
}

// This function loops through the array to calculate the total amount of rainfall
double totalRainfall(double data[], int s)
{
  double total = 0; 
  for (int i = 0; i <= s; i++)
    total += data[i];
  return total;
}

// This function loops through the array to calculate the average amount of rainfall and returns it
double averageRainfall(double data[], int s)
{
  double total = totalRainfall(data, s);
  double average = total / s;
  return average;
}

// This function loops through the array to find the month with the most amount of rain and returns it
int wettestMonth(double data[], int s)
{
  int highest = data[0];
  for (int i = 0; i < s; i++)
    if (data[i] > highest)
      highest = i;
      
  return highest;
}

// This function loops through the array to find the month with the least amount of rain and returns it
int driestMonth(double data[], int s)
{
  int lowest = data[0];
  for (int i = 0; i < s; i++)
    if (data[i] < lowest)
      lowest = data[i];
  
  return lowest;
}

// Shows menu with options for the user to choose
void showMenu()
{
  cout << "1. Enter rainfall data for a particular month" << endl;
  cout << "2. Display a report of rainfall data"          << endl;
  cout << "0. Exit"          << endl;
  cout << "Your choice: ";
}

// This function takes a number representing a month and returns a string with the name of the month
string getMonth(int m)
{
  string month;
  switch (m)
  {
    case 0 : month = "January"  ; break;
    case 1 : month = "February" ; break;
    case 2 : month = "March"    ; break;
    case 3 : month = "April"    ; break;
    case 4 : month = "May"      ; break;
    case 5 : month = "June"     ; break;
    case 6 : month = "July"     ; break;
    case 7 : month = "August"   ; break;
    case 8 : month = "September"; break;
    case 9 : month = "October"  ; break;
    case 10: month = "November" ; break;
    case 11: month = "December" ; break;
    default: month = "Invalid Month";
  }
  return month;
}