/**
* Name: Anderson Fernandes
* Date: September 4, 2018
* Description: A with a 20 gallon gas tank averages 23.5 miles per gallon when 
* driven in town and 28.9 miles per gallon when driven on the highway. Write a 
* program that calculates and displays the distance the car can travel on one 
* tank of gas when driven intown and when driven on the highway.
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
   double tank        = 20;
   double town_mpg    = 23.5;
   double highway_mpg = 28.9;
   // Calculations
   double town_distance    = tank * town_mpg;
   double highway_distance = tank * highway_mpg;
   // Show results on the screen
   cout << "Tank Capacity: "              << tank             << endl;
   cout << "Town MPG: "                   << town_mpg         << endl;
   cout << "Town miles it can drive: "    << town_distance    << endl;
   cout << "Highway MPG: "                << highway_mpg      << endl;
   cout << "Highway miles it can drive: " << highway_distance << endl;
}