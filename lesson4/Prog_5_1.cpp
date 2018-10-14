/**
* Name: Anderson Fernandes
* Date: October 9, 2018
* Description: Write a program thatuses a loop to display the characters for each ASCII code
* 32 through 127. Display 16 characters on each line with one space between characters.
**/

#include <iostream>
using namespace std;

int main()
{
  // Defining the low and high bounds of the ASCII characters to print
  const int LOW = 32;
  const int HIGH = 127;

  // Looping through the LOW and HIGH ranges
  for (int i = 32; i <= 127; i++)
  {
    // Print the ASCII character
    cout << (char)i << " "; 
    // Go to the next line after the 16th character has been printed
    if (i % 16 == 15)
      cout << endl;
  }
  cin.get();
  cin.ignore();
  return 0;
}