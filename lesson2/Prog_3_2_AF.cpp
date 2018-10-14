/**
* Name: Anderson Fernandes
* Date: September 10, 2018
* Description: There are three seating categories at a stadium: For a softball game, Class A
* seats cost $15,  Class B seats cost $12, and Class C seats cost $9. Write a program that
* asks how manu tickets for each class of seats were sold, then displays the amount of income
* generated from ticket sales. Format your dollar amount in a fixed-point notation with two
* decimal points and make sure the decimal point is always displayed.
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
   // Constants
   const double CLASS_A_PRICE = 15.0;
   const double CLASS_B_PRICE = 12.0;
   const double CLASS_C_PRICE = 9.0;

   // Variables
   int amount_class_a = 0;
   int amount_class_b = 0;
   int amount_class_c = 0;
   double total = 0;
   
   // User input
   cout << "How many Class A seats were sold? ";
   cin  >> amount_class_a;
   cout << "How many Class B seats were sold? ";
   cin  >> amount_class_b;
   cout << "How many Class C seats were sold? ";
   cin  >> amount_class_c;

   // Calculating the result
   total = (amount_class_a * CLASS_A_PRICE) + (amount_class_b * CLASS_B_PRICE) + (amount_class_c * CLASS_C_PRICE);

   // Displaying result
   cout << "Total revenue from ticket sales: $ " << fixed << setprecision(2) << total;
   
   cin.ignore();
   cin.get();
   return 0;
}