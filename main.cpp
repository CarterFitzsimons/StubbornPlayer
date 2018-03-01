#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int numPlays;
  int wins = 0;
  
  cout<<"How many times do you want to play the game?"<<endl;
  cin>>numPlays;

  for(int i = 0;i < numPlays;i++){
    game.newGame();
    game.guessDoorC();
    game.guessDoorC();
    
    if(game.isWinner() == true){
      wins++;
    }
  }
  
  cout<<"You won "<<wins<<" times."<<endl;

  return 0;
}
