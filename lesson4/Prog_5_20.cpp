/**
* Name: Anderson Fernandes
* Date: October 14, 2018
* Description: Write a program that asks the user for two positive integers between 2 and 10
* to use for the lenght and wdth of a rectangle. If the numbers are different, the larger of
* the two numbers should be used for a length and the smaller for the width. The program should
* then display a rectangle of this size on the screen using the character 'X'. For example, if
* the user enters either 2 5 or 5 2, the program should display the following:
*       XXXXX
*       XXXXX
**/

#include <iostream>
using namespace std;

void drawRectangle(int w, int l);

int main()
{
  int num1, num2, width, height;

  do {
   cout << "Enter the positive integer 1 of 2 between 2 and 10: "; 
   cin >> num1;
  } while (num1 < 2 || num1 > 10);

  do {
   cout << "Enter the positive integer 2 of 2 between 2 and 10: "; 
   cin >> num2;
  } while (num2 < 2 || num2 > 10);
  
  // Get the highest number and assign it to width
  width = num1 > num2 ? num1 : num2;
  // Get the highest number and assign it to height
  height = num1 < num2 ? num1 : num2;

  drawRectangle(width, height); 

  cin.get();
  cin.ignore();
  return 0;
}

void drawRectangle(int l, int w)
{
  for (int width = 1; width <= w; width++)
  {
    for (int length = 1; length <= l; length++)
    {
      cout << "X";
    }
   cout << endl;     
  }
}
