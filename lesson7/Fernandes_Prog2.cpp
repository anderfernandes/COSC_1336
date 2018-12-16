/**
 * Name: Anderson Fernandes
 * Date: December 9, 2018
 * Description: Final Programming Project - Chapter 8, Programming Challenge 10
**/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int getNumberOfWins(vector<string> mlbWinners, string query);

int main()
{
  vector<string> teams, winners;
  int numberOfWins = 0;
  string team, winner, input;

  ifstream finTeams, finWinners;

  finTeams.open("Teams.txt");
  finWinners.open("WorldSeriesWinners.txt");

  while (getline(finTeams, team))
    teams.push_back(team);

  while (getline(finWinners, winner))
    winners.push_back(winner);

  cout << "Major League Baseball Teams" << endl;
  cout << "---------------------------" << endl;

  for (string &t : teams)
    cout << t << endl;

  while (input != "q")
  {

    cout << "Enter the name of a team to find out how many times they were champions or q to quit: ";

    getline(cin, input);

    if (input != "q")
    {
      numberOfWins = getNumberOfWins(winners, input);
    
      if (numberOfWins == 0)
        cout << "The " << input << " never won the World Series." << endl;
      else
        cout << "The " << input << " won the World Series " << numberOfWins << " times." << endl;
    }
    
  }
  cin.ignore();
  cin.get();
  return 0;
}

int getNumberOfWins(vector<string> mlbWinners, string query)
{
  int wins = 0;
  
  for (string &mlbWinner : mlbWinners)
  {
    if (mlbWinner == query)
      wins++;
  }
  return wins;
}