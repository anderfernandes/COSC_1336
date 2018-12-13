/**
* Name: Anderson Fernandes
* Date: October 30, 2018
* Description: Programming Assignment - Volume Calculations Using a Menu
**/

#include <iostream>
#include <iomanip>

using namespace std;

// PI
const double PI = 22/7;

void menuSelection(char &option);
double calcVolumeCylinder(double radius, double height);
double calcVolumeSphere(double radius);
double calcVolumeBox(double length, double width, double height);

int main()
{
  char op;
  double r, h, w, l;
  menuSelection(op);

  // Validate
  while (op != 'c' && op != 's' && op != 'b')
  {
    cout << "Invalid option. Please try again: ";
    cin >> op;
  }

  switch (op)
  {
    // cylinder
    case 'c': cout << "Enter the radius of the cylinder: ";
              cin  >> r;
              cout << "Enter the height of the cylinder: ";
              cin  >> h;
              cout << "The volume of the cylinder is "
                   << fixed << setprecision(2) << calcVolumeCylinder(r, h);
              break;
    // sphere
    case 's': cout << "Enter the radius of the sphere: ";
              cin  >> r;
              cout << "The volume of the sphere is "
                   << fixed << setprecision(2) << calcVolumeSphere(r);
              break;
    // box
    case 'b': cout << "Enter the length of the box: ";
              cin  >> l;
              cout << "Enter the width of the box: ";
              cin  >> w;
              cout << "Enter the height of the box: ";
              cin  >> h;
              cout << "The volume of the box is "
                   << fixed << setprecision(2) << calcVolumeCylinder(r,h);
              break;
  }

  cin.ignore();
  cin.get();
  return 0;
}

void menuSelection(char &option)
{
  cout << "Andersoft Volume Calculator 1.0                       " << endl;
  cout << "Select one of the options below:                      " << endl;
  cout << "Enter c to calculate the Volume of a Cylinder         " << endl;
  cout << "Enter s to calculate the Volume of a Sphere           " << endl;
  cout << "Enter b to calculate the Volume of a Box              " << endl;
  cout << "Your selection is: ";
  cin  >> option;

  return;
}

double calcVolumeCylinder(double radius, double height)
{
  return PI * radius * radius * height;
}

double calcVolumeSphere(double radius)
{
  return (4/3) * PI * radius;
}

double calcVolumeBox(double length, double width, double height)
{
  return length * width * height;
}