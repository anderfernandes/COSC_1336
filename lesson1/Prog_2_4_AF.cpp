/**
* Name: Anderson Fernandes
* Date: September 4, 2018
* Description: Write a program that computes the tax and tip on a restaurant 
* bill for a patron with a $44.50 meal charge. The tax should be 6.75 percent  
* of the meal cost. The tip should be 15 percent of the total after adding the tax. 
* Display the meal cost, tax amount, tip amount and total bull on the screen.
**/

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
   // Variable declarations
   double bill       = 44.50;
   double tax        = (6.75 / 100.0);
   double tip        = (15.0 / 100.0);
   // Calculations
   double meal_cost  = (bill * tax) + bill;
   double tax_amount = bill * tax;
   double tip_amount = (meal_cost * tip);
   double total      = bill + tax_amount + tip_amount;
   // Show totals
   cout << "Meal Cost:  $" << fixed << setprecision(2) << meal_cost  << endl;
   cout << "Tax Amount: $" << fixed << setprecision(2) << tax_amount << endl;
   cout << "Tip Amount: $" << fixed << setprecision(2) << tip_amount << endl;
   cout << "Total: $"      << fixed << setprecision(2) << total      << endl;

}