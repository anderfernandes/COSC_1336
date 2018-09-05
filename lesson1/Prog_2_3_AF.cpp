/**
* Name: Anderson Fernandes
* Date: August 28, 2018
* Description: Write a program that computes the total sales tax on a $95 purchase.
* Assume the state sales tax in 6.5 percent and the county sales tax is 2 percent.
* Display the purchase price, state tax, county tax, and total tax amounts on the screen.
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
   double purchase;
   double state_tax;
   double state_tax_total;
   double county_tax;
   double county_tax_total;
   double total;
   // Assign values to variables
   purchase         = 95.00;
   state_tax        = 0.065;
   state_tax_total  = purchase * state_tax;
   county_tax       = 0.02;
   county_tax_total = purchase * county_tax;
   // Calculate total
   total = purchase + state_tax_total + county_tax_total;
   // Show total as a two decimal place number
   cout << "Purchase: $ "            << fixed                              << setprecision(2)  << purchase << endl;
   cout << "State Sales Tax ("       << state_tax * 100 << " %): $ "       << state_tax_total  << endl;
   cout << "County Sales Tax ("      << county_tax * 100 << " %): $ "      << county_tax_total << endl;
   cout << "Total in Sale Taxes: $ " << state_tax_total + county_tax_total << endl;
   cout << "Total: $ "               << total << endl;
   return 0;
}