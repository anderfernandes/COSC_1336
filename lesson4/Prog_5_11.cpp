/**
* Name: Anderson Fernandes
* Date: October 14, 2018
* Description: A country club, which currently charges $3,000 per year for membership,
* has announced it will increase its membership fee by 3 percent each year for the
* next five years. Write a program that uses a loop to display the projected rates
* for the next five years.
**/

#include <iostream>
#include <iomanip>
using namespace std;

const double RATE             = 0.03;
const int YEARS               = 5;
const double MEMBERSHIP_PRICE = 3000;

// Return new membership price
double getNewPrice(double c);

int main()
{
  double current_price          = 0;

  for (int y = 1; y <= YEARS; y++)
  {
    // Only calculate price  increase after year 1
    current_price = y == 1 ? MEMBERSHIP_PRICE : getNewPrice(current_price);
    cout << "Mebership price in year " << y     << ": $ " 
         << setprecision(2)            << fixed << current_price << endl;
  }

  cin.get();
  cin.ignore();
  return 0;
}

double getNewPrice(double c)
{
  return (c * RATE) + c;
}