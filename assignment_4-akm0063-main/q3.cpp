#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
 private:
   string name;
   int score;
 
 public:
   Player() {
     score = 0;
     name = "no name";
   }
   Player(int newScore, string newName) {
     score = newScore;
     name = newName;
   }
   void setName(string newName) {
     name = newName;
   }
   void setScore(int newScore) {
     score = newScore;
   }
   string getName() {
     return name;
   }
   int getScore() {
     return score;
   }
};

void addPlayer(int &numPlayers, vector<Player> &players)
{  
  string name;
  int score;

  if (numPlayers < 10) {
    cout << "\nEnter the new player's name: ";
    cin >> name;
    cout << "Enter the new player's score: ";
    cin >> score;
    Player newPlayer(score, name);
    players.push_back(newPlayer);
    cout << name << " has been added to the list.\n";
    numPlayers++;
  }
  else {
    cout << "\nThe list of plyers is full.\n";
  }
}
void printPlayers(int numPlayers, vector<Player> players)
{
  if (numPlayers > 0) {
    cout << "\nPlayer Scores: " << endl;
    for (int i = 0; i < numPlayers; i++) 
    {
      cout << players[i].getName() << " " << players[i].getScore() << endl; 
    }
  }
  else {
    cout << "\nThe player list is empty.\n";
  }
}
void searchPlayer(int numPlayers, vector<Player> players)
{
  string name;
  
  if (numPlayers > 0) {
    cout << "\nEnter the name of the player you want to search for: " << endl;
    cin >> name;
    
    for (int i = 0; i < numPlayers; i++) {
      if (players[i].getName() == name)
      {
        cout << players[i].getName() << " " << players[i].getScore() << endl;
      }
      else {
        cout << "This player does not exist.\n";
      }
    }
  }
  else {
    cout << "\nThe player list is empty.\n";
  }
}
void removePlayer(int &numPlayers, vector<Player> &players)
{
  string name;
  
  if (numPlayers > 0) {
    cout << "\nEnter the player's name you want to remove: ";
    cin >> name;
    
    for (int i = 0; i < numPlayers; i++) {
      if (players[i].getName() == name)
      {
        players.erase(players.begin() + i);
        cout << name << " has been removed from the list.\n";
        numPlayers--;
      }
      else {
        cout << "This player does not exist.\n";
      }
    }
  }
  else {
    cout << "\nThe player list is empty.\n";
  }
}

int main () {
  
  int input = 0;
  string name;
  int score;
  int numPlayers = 0;

  vector<Player> players;
  
  while (input !=5) {
    cout << "\nEnter the number of the action you want to preform:"
    << "\n1: Add a new player.\n2: Print all player names and scores."
    << "\n3: Get a player's score.\n4: Remove a player.\n5: Done.\n";
    cin >> input;

    switch (input) {
      case 1:
      // Add a new player and score (up to ten players).
      addPlayer(numPlayers, players);
      break;
      
      case 2: 
      // prints all player names and their scores to the screen.
      printPlayers(numPlayers, players);
      break;
      
      case 3:
      // Allow the user to enter a player name and output that player’s 
      // score or a message if the player name has not been entered.
      searchPlayer(numPlayers, players);
      break;
      
      case 4: 
      // Allow the user to enter a player name and remove the player from the list.
      removePlayer(numPlayers, players);
      break;

      case 5:
      break;
      
      default:
      cout << "Enter a valid number (1-5).";
      break;
    }
  }
return 0;
};