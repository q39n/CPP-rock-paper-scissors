#include <iostream>


using namespace std;

// Generaet a random number in range 0, 2 for BOT Choicses
int generateRandom() {
  srand((unsigned) time(NULL));

  int random = rand() % 3;

  return random;
}

// Get the letter from the user and return an int
int convertLetterToString(string userIn) {
  if ( userIn == "r" ) { 
    return 0;
  }

  else if ( userIn == "p" ) { 
    return 1;
  }
  
  else if ( userIn == "s" ) { 
    return 2;
  }

  return -1;
}

// See if the player Was the Winnner
int isPlayerWinner(int player, int bot) {
  if ( player != bot ) {
    
    if ( player == 1 and bot == 0) {
    
      return true;
    }

    else if ( player == 2 and bot == 1 ) {
      
      return true;
    }

    else if ( player == 1 and bot == 0 ) {
  
      return true;
    }
    
    return false;
  }

  return -1; 
}


int main() { 

  const int arraySize = 3; 
  string objects[arraySize] = {"Rock", "Paper", "Scissors"}; 
  
  bool isRunning = true; 

  while (isRunning) { 

    string playerChoice; 
    int x = generateRandom();
    int botChoiceInt = x;

    cout << "(R)ock (P)aper (S)cissors: "; 
    cin >> playerChoice; 

    int playerChoiceInt = convertLetterToString(playerChoice);
    

    if ( playerChoiceInt != -1 ) {
      
      if ( isPlayerWinner( playerChoiceInt, botChoiceInt ) != -1 ) {
        if ( isPlayerWinner( playerChoiceInt, botChoiceInt ) == 1) {
          cout << "You Win !" << endl;
          isRunning = !isRunning;
        }

        else {
          cout << "The Bot Win good luck next time" << endl;
          isRunning = !isRunning;
        }

      }
  
      else {
        cout << "Draw! Try Again" << endl;
      }
 

    }

    else {
      cout << "Wrong Input try Again!" << endl << endl;
    }


  }


  return 0;

}
