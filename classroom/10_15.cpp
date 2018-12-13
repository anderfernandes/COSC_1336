/**
* Name: Anderson Fernandes
* Date: October 14, 2018
* Description: 
**/

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
  ifstream fin;
  fin.open("/home/anderson/COSC_1336/lesson4/classroom/data.txt");
  double num;
  double numElements = 0;
  double sum = 0;
  string orgName, orgNameB;

  fin >> orgName;
  cout << "Data source: " << orgName << endl;
  
  fin >> orgNameB;
  cout << "Data source: " << orgNameB << endl;
  
  while(fin >> num)
  {
    cout << num << endl;
    numElements++;
    sum += num;
  }
  cout << "Number of elements: " << numElements << endl;
  cout << "Average: " << sum / numElements << endl;

  fin.close();
  cin.get();
  cin.ignore();
  return 0;
}
