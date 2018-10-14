/**
* Name: Anderson Fernandes
* Date: October 2, 2018
* Description: Chapter 4 Challenge 11
**/
#include <iostream>

using namespace std;

// Defining function signatures
double areaCircle(double radius);
double areaRectangle(double width, double length);
double areaTriangle(double width, double height);
void showMenu();
bool isValid(double input);

// Making a constand for PI
const double PI = 3.14159;

int main()
{
    // This variable will hold the user's choice
  int choice;
  // These variables will hold the dimenstions
  double w, h, b, r, l;
  
  // Show Menu
  showMenu();
  // Get menu option from the user and assign it to a variable
  cin >> choice;

  switch(choice)
  {
    // Circle
    case 1: cout << "Enter the circle's radius: ";
            cin  >> r;
            if (isValid(r))
              cout << "The area of the circle is " << areaCircle(r);
            break;
    // Rectangle
    case 2: cout << "Enter the rectangle's width: ";
            cin  >> w;
            if (isValid(w))
              cout << "Enter the rectangle's height: ";
            else break; // Stops the program without asking for the next input
            cin >> h;
            if (isValid(h))
              cout << "The area of the rectangle is " << areaRectangle(w, h); 
            break;
    // Triangle
    case 3: cout << "Enter the triangle's base: ";
            cin  >> b;
            if (isValid(b))
              cout << "Enter the triangle's height: ";
            else break; // Stops the program without asking for the next input
            cin  >> h;
            if (isValid(h))
              cout << "The area of the triangle is " << areaTriangle(b, h);
            break;
    // Quit
    case 4: break;
    // If an invalid option is entered, tell the user
    default: cout << "Invalid option. Please try again.";
  }
  
  cin.get();
  cin.ignore();
  return 0;
}

// Calculate area of a circle
double areaCircle(double radius)
{
  return radius * radius * PI;
}

// Calculate area of a rectangle
double areaRectangle(double width, double length)
{
  return width * length;
}

// Calculate area of a triangle
double areaTriangle(double base, double height)
{
  return ((base * height) / 2);
}

// Show menu
void showMenu()
{
  cout << "Geometry Calculator" << endl;
  cout << "1. Calculate the Area of a Circle"    << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle"  << endl;
  cout << "4. Quit"                              << endl;
}

// Validate Input
bool isValid(double input)
{
  if (input > 0)
    return true;
  else
  {
    cout << "Invalid input.";
    return false;
  }
}