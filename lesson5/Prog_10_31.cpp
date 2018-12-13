/**
* Name: Anderson Fernandes
* Date: October 30, 2018
* Description: Programming Assignment, October 31, 2018
**/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

double calcAltitude(int hr);
double calcVelocity(int hr);
double toMetersPerSecond(double metersPerHour);
string printTableHeader();

int main()
{
  int t, max_time;
  double max_height;
  
  ofstream foutHeight;
  ofstream foutVelocity;
  foutHeight.open("height.txt");
  foutVelocity.open("velocity.txt");
  

  cout << "Enter time: ";
  cin  >> t;
  while (t > 5)
  {
    cout << "Please enter a number between 0 and 5: ";
    cin  >> t;
  }
  // Showing table header on the screen
  cout         << printTableHeader() << endl;
  // Writing table header on height.txt file
  foutHeight   << printTableHeader() << endl;
  // Writing table header on altitude.txt file
  foutVelocity << printTableHeader() << endl;

  for (max_time = 0; max_time <= t; max_time++)
  {
    // Write table on the screen
    cout << left << setw(9)  << max_time << fixed << setprecision(2) << left 
                 << setw(15) << calcAltitude(max_time) 
                 << setw(15) << toMetersPerSecond(calcVelocity(max_time)) 
                 << endl;
    foutHeight << max_time << fixed << setprecision(2) << left 
               << ", " << setw(13) << calcAltitude(max_time)
               << endl;
    
    foutVelocity << max_time << fixed << setprecision(2) << left 
                 << ", " << toMetersPerSecond(calcVelocity(max_time)) 
                 << endl;
  }

  foutHeight.close();
  foutVelocity.close();  

  cin.ignore();
  cin.get();
  return 0;
}

double calcAltitude(int hr)
{
  return (-0.12 * hr * hr * hr * hr) + (12 * hr * hr * hr) - (380 * hr * hr) + (4100 * hr) + 220;
}

double calcVelocity(int hr)
{
  return (-0.48 * hr * hr * hr) + (36 * hr * hr) - (760 * hr) + 4100;
}

double toMetersPerSecond(double metersPerHour)
{
  return metersPerHour / 3600;
}

string printTableHeader()
{
  return "Time     Altitude(m)    Velocity (m/s)";
}