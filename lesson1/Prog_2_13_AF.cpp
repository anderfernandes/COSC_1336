/**
* Name: Anderson Fernandes
* Date: September 9, 2018
* Description: A particular emplyee earns $39,000 anually. Write a program that 
* determines and displays what the amount of his gros pay will be for each pay 
* period if he is paid twice a month (24 pay checks per year) and if he is paid 
* bi-weekly (26 checks per yer).
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
   double salary        = 39000;
   double twice_a_month = salary / 24;
   double bi_weekly     = salary / 26;
   // Show result on the screen
   cout << "Salary: $"                     << fixed << setprecision(2) << salary        << endl;
   cout << "Twice a month check amount: $" << fixed << setprecision(2) << twice_a_month << endl;
   cout << "Bi-weekly checm amount: $"     << fixed << setprecision(2) << bi_weekly     << endl;
   cin.get();
   cin.ignore();
}