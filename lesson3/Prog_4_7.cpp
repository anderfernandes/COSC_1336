/**
* Name: Anderson Fernandes
* Date: October 8, 2018
* Description: Program to calculate areas of squares, circles and right triangles
**/

#include <iostream>;
using namespace std;

// PI constant
const double PI = 3.14159;
// Calculates area of a circle, takes in side
double areaSquare(double s);
// Calculates area of a circle, takes in radius
double areaCircle(double r); 
// Calculate area of a right triangle, takes in base and height
double areaRightTriangle(double b, double h);
// Shows menu with options
void showMenu();

int main()
{ 
  // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
  // NAME AND AN APPROPRIATE DATA TYPE.  
  double side, radius, base, height;
  int menuChoice;
  
  // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
  showMenu();
  // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
  cin >> menuChoice;
  // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
  switch(menuChoice)
  {
    case 1: cout << "Side of the square: ";
            cin  >> side;
            cout << "Area = " << areaSquare(side);
            break;
    
    case 2: cout << "Radius of the circle: ";
            cin  >> radius;
            cout << "Area = " << areaCircle(radius);
            break;
    
    case 3: cout << "Base of the right triangle:   ";
            cin  >> base;
            cout << "Height of the right triangle: ";
            cin  >> height;
            cout << "Area = " << areaRightTriangle(base, height);
            break;
    
    case 4: cout << "Exiting program." << endl;
            break;
    
    default: cout << "Invalid option.";
             break;

  }
  // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
  // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
  // BE DISPLAYED.

  cin.get();
  cin.ignore();
  return 0;
}

double areaSquare(double s)
{
  return s * s;
}
double areaCircle(double r)
{
  return PI * r * r;
}
double areaRightTriangle(double b, double h)
{
  return ((b * h) / 2);
}
void showMenu()
{
  cout << "Program to calculate areas of objects" << endl;
  cout << endl;
  cout << "1 -- square"         << endl;
  cout << "2 -- circle"         << endl;
  cout << "3 -- right triangle" << endl;
  cout << "4 -- quit"           << endl;
}