/**
* Name: Anderson Fernandes
* Date: October 14, 2018
* Description: Write a program that generates a random number between 1 and 100 and
* asks the user go guess what the number is. If the user's guess in higher than the 
* random number, the program should display "Too high. Try again.". If the user's 
* guess is lower than the random number, the program should display "Too low. Try again."
* The program should use a loop that repeats until the user correctly guesses the random 
* number. THen the program should display "Congratulations. You figured out my number."
**/

#include <iostream>
using namespace std;

const int LOW = 1;
const int HIGH = 100;

int getRandom();

int main()
{

  int random = getRandom();
  int guess  = 0;

  cout << "I am thinking of a number between " << LOW << " and " << HIGH << ". What is it? ";
  cin  >> guess; 
  do {
    guess > random ? cout << "Too high. Try again. " : cout << "Too low. Try again. ";
    cin >> guess;
  } while (guess != random);

  cout << "Congratulations! You figured out my number.";

  cin.get();
  cin.ignore();
  return 0;
}

int getRandom()
{
  int randomNum; // Will hold the randomly generated integer

   // "Seed" the random generator
   unsigned seed = time(0);
   srand(seed);

   // Randomly generate an integer between LOW and HIGH constants defined in line 15 and 16
   randomNum = rand() % HIGH + LOW;

   return randomNum;
}