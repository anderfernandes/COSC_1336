/**
 * Name: Anderson Fernandes
 * Date: December 9, 2018
 * Description: Programming Challenge 1, Chapter 9
**/

#include <iostream>
#include <fstream>

using namespace std;

// Check if account number is valid,
// query, array of valid account numbers, array size
bool isValid(int q, int data[], int s);

int main()
{
  const int size = 18;
  int val, input;
  bool isValidNumber = false;
  
  ifstream fin;

  fin.open("data.txt");

  // Array that will hold values
  int validValues[size];

  for (int i = 0; i < size; i++)
    fin >> validValues[i];

  while (!isValidNumber)
  {
    cout << "Enter a number account: ";
    cin >> input;

    isValidNumber = isValid(input, validValues, size);

    if (isValidNumber)
      cout << "The account number is valid.";
    else
      cout << "The account number is invalid." << endl;
  }

  cin.ignore();
  cin.get();
  return 0;
}

bool isValid(int q, int data[], int s)
{
  for (int j = 0; j < s; j++)
  {
    if (q == data[j])
      return true;
  }
  return false;
}
