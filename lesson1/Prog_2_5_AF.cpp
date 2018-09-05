/**
* Name: Anderson Fernandes
* Date: September 4, 2018
* Description: A car holds 16 gallons of gasoline and can travel 312 miles before 
* before refueling. Write a program that calculates the number of miles per gallon 
* the car gets. Display the result on the screen.
**/

// 
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * 
 * Main function
 * 
 * @return int
 * 
 **/

int main() {
   // Variables
   double tank = 16;
   double can_travel = 312;
   // Calcualtions
   double mpg = can_travel / tank;
   // Show result on the screen
   cout << "Gasoline ank Capacity: "                   << tank       << " gallons"      << endl;
   cout << "Distance it can travel with a full tank: " << can_travel << " miles"        << endl;
   cout << "Miles per gallon: "                        << fixed      << setprecision(1) << mpg << endl;
}