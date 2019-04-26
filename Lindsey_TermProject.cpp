#include <iostream>
using namespace std;
//function prototypes:
void setting(); // allowing the user to create a setting
void character(); // allowing the user to create or enter a character
void dialogue(); // allowing the user to enter dialogue
void action(); // allowing the user to add an action
bool validInput ( //checks for errors in user input
   int valueToCheck, // user input value to check
   int minValue,     // minimum for user input
   int maxValue      // maximum for user input
);

//switches trace statements off and on
const bool TRACE = false;

int main()
{
    if (TRACE) cerr << "Displaying Menu [a][b][c][d][e] choices" << endl;
    int userChoice; //user's choice in the menu.
    cout << "Welcome to ScriptWriter! Here are the options you can choose from to build your script." << endl;
    //loop for the program, so that the user can use it until they choose '5'.
    do
    {
      cout << "Setting - Type '1'" << endl;
      cout << "Character - Type '2'" << endl;
      cout << "Dialogue - Type '3'" << endl;
      cout << "Action - Type '4'" << endl;
      cout << "End Script - Type '5'" << endl;
      cin >> userChoice;

      //if the user input is correct
      while (userChoice == 1 || userChoice == 2 || userChoice == 3 || userChoice == 4)
      {
        //if (TRACE) cerr << "iterating main loop" << endl;
        switch (userChoice)
        {
          case 1:
          {
            setting(); //running setting
            break;
          }
          case 2:
          {
            character(); //running character
            break;
          }
          case 3:
          {
            dialogue(); //running dialogue
            break;
          }
          case 4:
          {
            action(); //running action
            break;
          }
       } // end of block switch (userChoice)
        cin >> userChoice; //allowing the user to enter another choice
    } // end of while loop

    //if the user wishes to exit
    if (TRACE) cerr << "IF finish script, displaying 'You have completed your script. Look above to see your work'. ending program." << endl;
    if (userChoice == 5)
    {
      cout << "You have completed your script. Look above to see your work!";
    }

    //making sure that the user uses a number 1-5
    else if (userChoice > 5 || userChoice < 1)
    {
      cout << "Sorry, that number cannot be used. Please use a number between 1 and 5." << endl;
    }
  }
  while (userChoice != 5); // end of do while loop
  return 0;
}

void setting() // contents of setting
{
  const int INTERIOR = 1;
  const int EXTERIOR = 2;
  //prompting the user for int or ext
  if (TRACE) cerr << "IF user chooses setting, ask int or ext." << endl;
  cout << "Int or Ext?" << endl;
  cout << "Int - Type '1'" << endl;
  cout << "Ext - Type '2'" << endl;
  int locationChoice; //chosing between int and ext
  string exactLocation; //entering exact location
  cin >> locationChoice;

  //input validation
  validInput (
     locationChoice, // value to check
     1,              // minimum for value
     2               // maximum for value
  );

  // while the user input matches a valid input
  while (validInput)
  {
    if(locationChoice == INTERIOR) //if int
    {
      cout << "                  INT.";
      if (TRACE) cerr << "asking for the exact location to be filled in." << endl;
      cin >> exactLocation;
    }
    else if (locationChoice == EXTERIOR) //if ext
    {
      cout << "                  EXT.";
      cin >> exactLocation;
    }
  break;
  }
  //if the input is invalid
  if (locationChoice > 2 || locationChoice < 1)
  {
    cout << "Sorry, you cannot use that number. Please use a number between 1 and 2.";
  }
}

void character() //contents of character
{
  if (TRACE) cerr << "IF character, indenting and asking them to type in character name."<< endl;
  string userCharacter; //allows the user to enter a character
  cout << "                  ";
  cin >> userCharacter;
  }

void dialogue() //contents of dialogue
{
  if (TRACE) cerr << "IF dialogue, indenting and allowing them to type dialogue." << endl;
  cout << "             ";
  string dialogueInput; // allows the user to enter dialogue
  cin >> dialogueInput;
}

void action() //contents of action
{
    if (TRACE) cerr << "IF action, allowing for user input." << endl;
    string actionInput; // allows the user to enter dialogue
    cin >> actionInput;
}

bool validInput (    //contents of validInput
   int valueToCheck, // value to check
   int minValue,     // minimum for value
   int maxValue      // maximum for value
)
{
  //if the value being examined is invalid
   if ((valueToCheck > maxValue) || (valueToCheck < minValue))
   {
      cout << "Sorry, that number cannot be used. Please use a number between 1 and 5." << endl;
   }
}
