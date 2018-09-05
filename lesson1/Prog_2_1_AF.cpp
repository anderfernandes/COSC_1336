/**
* Name: Anderson Fernandes
* Date: August 27, 2018
* Description: Write a program that stores the integers 50 and 100 in variables and stores the sum
* of these two in a ariable name total. Display the total on the screen.
**/

// 
#include <iostream>

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
   int a;
   int b;
   int total;
   // Assign values to variables
   a = 50;
   b = 100;
   // Calculate sum
   total = a + b;
   // Show result
   cout << a << " + " << b  << " = " << total << endl;
   return 0;
}