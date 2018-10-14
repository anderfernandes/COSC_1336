/**
* Name: Anderson Fernandes
* Date: October 9, 2018
* Description: Write a program that asks the user for a positive integer value and that uses
* a loop to validate the input. The program should then use a second loop to compute the sum
* of all the integers from 1 up to the number entered. For example, if the users enters 50,
* the loop will find the sum of 1, 2, 3, 4, ... 50.
**/

#include <iostream>
using namespace std;

int main()
{
  int number, sum = 0;

  do {
    cout << "Enter a positive integer value: ";
    cin  >> number;
  } while (number < 0);

  for (int i = 1; i <= number; i++)
  {
    // Sum the current iteration number with the previous one
    sum += i;
  }

  cout << "The sum of the numbers between 1 and " << number << " is " << sum;

  cin.get();
  cin.ignore();
  return 0;
}