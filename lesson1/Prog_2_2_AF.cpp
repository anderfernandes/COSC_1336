/**
* Name: Anderson Fernandes
* Date: August 28, 2018
* Description: The East Coast sales division of a company generates 58 percent
* of total sales. Based on that percentage, write a program that will predict
* how much the East Cost division will generate if the company has $ 8.6 million
* in sales this year.
**/

// 
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * 
 * @param {null}
 * 
 * @return void
 * 
 **/

int main() {
   // Variable declarations
   double percentage;
   double sales;
   double total;
   // Assign values to variables
   percentage = 0.58;
   sales      = 8600000;
   // Calculate total
   total = percentage * sales;
   // Show total as a two decimal place number
   cout << "East Coast sales division will generate $ " << fixed << setprecision(2) << total << " in sales this year." << endl;
   return 0;
}