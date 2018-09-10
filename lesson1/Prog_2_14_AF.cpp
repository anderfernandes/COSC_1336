/**
* Name: Anderson Fernandes
* Date: September 9, 2018
* The star player of a high school basketball team is 74 inches tall. Write a program to compute
* and display the height in feet/inches form.
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
   double height_inches = 74;
   double height_feet   = height_inches / 12;
   // Show result on the screen
   cout << "Player height in inches: " << fixed << setprecision(1) << height_inches << " in.\n";
   cout << "Player height in feet:   " << fixed << setprecision(1) << height_feet   << " ft.\n";
   cin.get();
   cin.ignore();
}