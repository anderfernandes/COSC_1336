/**
* Name: Anderson Fernandes
* Date: November 25, 2018
* Description: Programming Challenge 1, Chapter 8 - Perfect Scores
**/

#include <iostream>

using namespace std;

// This function counts the number of 100
int countPerfect(int g[], int n);

int main()
{
  const int NUM_GRADES = 20;
  int grades[NUM_GRADES];
  int perfectScores;

  cout << "Enter " << NUM_GRADES << " grades, a number between 0 and 100." << endl;
  cout << endl;
  
  for (int index = 0; index < NUM_GRADES; index++)
  {
    cout << "Enter grade #" << index + 1 << ": ";
    cin  >> grades[index]; 
  }

  perfectScores = countPerfect(grades, NUM_GRADES);

  cout << perfectScores << " students have a perfect score of 100.";

  cin.ignore();
  cin.get();
  return 0;
}

int countPerfect(int g[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (g[i] == 100)
    {
      count++;
    }
  }

  return count;
}