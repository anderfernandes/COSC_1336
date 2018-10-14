/**
* Name: Anderson Fernandes
* Date: October 2, 2018
* Description: Chapter 4 Challenge 18
**/
#include <iostream>
#include <iomanip>

using namespace std;

void showMenu();
bool isValid(double input);

int main()
{
  int userOption;
  double feet, seconds;
  const double AIR   = 1100;
  const double WATER = 4900;
  const double STEEL = 16400;

  // Show Menu
  showMenu();
  cin  >> userOption;
  switch(userOption)
  {
    case 1: cout << "Enter the number of feet the sound wave will travel in the air: ";
            cin  >> feet;
            seconds = feet / AIR;
            if (isValid(feet))
              cout << "It will take " << fixed << setprecision(4) << seconds << endl;
            break;
    case 2: cout << "Enter the number of feet the sound wave will travel in the water: ";
            cin  >> feet;
            seconds = feet / WATER;
            if (isValid(feet))
              cout << "It will take " << fixed << setprecision(4) << seconds << endl;
            break;
    case 3: cout << "Enter the number of feet the sound wave will travel in steel: ";
            cin  >> feet;
            seconds = feet / STEEL;
            if (isValid(feet))
              cout << "It will take " << fixed << setprecision(4) << seconds << endl;
            break;
    default: cout << "Invalid input.";
             break;
  }
  

  cin.get();
  cin.ignore();
  return 0;
}

// Show menu
void showMenu()
{
  cout << "Please select a medium:" << endl;
  cout << "1. Air"   << endl;
  cout << "2. Water" << endl;
  cout << "3. Steel" << endl;
}

// Validate Input
bool isValid(double input)
{
  if (input > 0)
    return true;
  else
  {
    cout << "Invalid input.";
    return false;
  }
}
