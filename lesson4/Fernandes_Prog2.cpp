/**
* Name: Anderson Fernandes
* Date: October 21, 2018
* Description: Programming Project 2
**/

#include <iostream>
#include <iomanip>

using namespace std;

const double CARBON_DIOXIDE = 258.0;
const double AIR            = 331.5;
const double HELIUM         = 972.0;
const double HYDROGEN       = 1270.0;

int main()
{

  int option = 0;
  double medium, seconds;

  do {
    cout << "Choose a gas:"     << endl;
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Air"            << endl;
    cout << "3. Helium"         << endl;
    cout << "4. Hydrogen"       << endl;
    cout << "Enter an option: ";
    cin  >> option;
    cout << endl;
  } while ((option < 1) || (option > 4));

  cout << "Enter the number of seconds (0 to 30) it took for the sound to travel in this medium: ";
  cin  >> seconds;

  switch(option) {
    case 1: medium = CARBON_DIOXIDE; break;
    case 2: medium = AIR;            break;
    case 3: medium = HELIUM;         break;
    case 4: medium = HYDROGEN;       break;
  }

  cout << "The medium travelled " <<  fixed << setprecision(2) 
       << medium * seconds << " meters.";

  cin.get();
  cin.ignore();
  return 0;
}