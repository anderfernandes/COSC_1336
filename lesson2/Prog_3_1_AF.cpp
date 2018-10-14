/**
* Name: Anderson Fernandes
* Date: September 10, 2018
* Description: Write a program that calculates a car's gas mileage. The program should ask the user
* to enter the number of gallos of gas the car can hold and the number of miles it can be driven
* on a full tank. It should then calculate and display the number of miles per gallon the car gets.
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
   double tank;
   double can_travel;
   // User input
   cout << "Enter your car's gas tank capacity: ";
   cin >> tank;
   cout << "How many miles can be driven on a full tank? ";
   cin >> can_travel;
   // Calcualtions
   double mpg = can_travel / tank;
   // Show result on the screen
   cout << "Gasoline ank Capacity: "                   << tank       << " gallons"      << endl;
   cout << "Distance it can travel with a full tank: " << can_travel << " miles"        << endl;
   cout << "Miles per gallon: "                        << fixed      << setprecision(1) << mpg << " mpg" << endl;

   cin.ignore();
   cin.get();
   return 0;
}