/**
* Name: Anderson Fernandes
* Date: September 30, 2018
* Description: With the rand() function you learned about in Chapter 3 and the if/else if statement
* you learned about in this chapter, you can now create a simple fortune telling game, Your program
* will start by asking users to enter three careers they would like to have some day. The program
* will then use random numbers ro predict their future.
**/
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
   // String to hold user entered careers
   string career1, career2, career3;

   int randomNum; // Will hold the randomly generated integer

   // "Seed" the random generator
   unsigned seed = time(0);
   srand(seed);

   // Explain the game and get the player's career choices
   cout << "I am a fortune teller. Look into my crystall screen \n"
        << "and enter 4 careers you would like to have. Example: \n\n"
        << "chef \n astrounaut \n CIA agent \n\n"
        << "then I wil predict what you will be. \n\n";
   cout << "Career choice 1: ";
   getline(cin, career1);
   cout << "Career choice 2: ";
   getline(cin, career2);
   cout << "Career chouce 3:" ;
   getline(cin, career3);

   // Randomly generate an integer between 1 and 4.
   randomNum = 1 + rand() % 4;

   // Using switch statements to output the predicition, as requested
   switch(randomNum)
   {
      case 1:  cout << "You will be a " << career1 << endl;
               break;
      case 2:  cout << "You will be a " << career2 << endl;
               break;
      case 3:  cout << "You will be a " << career3 << endl;
               break;
      default: cout << "Sorry. You will not be any of these." << endl;
               break;
   }

   cin.get();
   cin.ignore();
   return 0;
}