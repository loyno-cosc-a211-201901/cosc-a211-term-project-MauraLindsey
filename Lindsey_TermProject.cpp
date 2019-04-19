#include <iostream>
using namespace std;
//function prototypes:
void setting(int, int);
void character();
void dialogue();
void action();

int main()
{
    //    cerr << "Displaying Menu [a][b][c][d][e] choices" << endl;
    int userChoice; //user's choice in the menu.
    cout << "Welcome to ScriptWriter! Here are the options you can choose from to build your script." << endl;
    cout << "Setting - Type '1'" << endl;
    cout << "Character - Type '2'" << endl;
    cout << "Dialogue - Type '3'" << endl;
    cout << "Action - Type '4'" << endl;
    cout << "End Script - Type '5'" << endl;
    cin >> userChoice;

    //cerr << "looping until the user chooses to end the script." << endl;
    while (userChoice == 1 || userChoice == 2 || userChoice == 3 || userChoice == 4)
    {
        switch (userChoice)
        {
          case 1:
          {
            void setting(int, int);
            break;
          }
          case 2:
          {
            void character();
            break;
          }
          case 3:
          {
            void dialogue();
            break;
          }
          case 4:
          {
            void action();
            break;
          }
        }
        break;
    }

    //cerr << "IF finish script, displaying 'You have completed your script. Look above to see your work'. ending program." << endl;
    if (userChoice == 5)
    {
      cout << "You have completed your script. Look above to see your work!";
    }

    //making sure that the user uses a number 1-5
    else if (userChoice > 5 || userChoice < 1)
    {
      cout << "Sorry, that number cannot be used. Please use a number between 1 and 5.";
    }
    return 0;
}

void setting(int interior, int exterior)
{
  //cerr << "IF user chooses setting, ask int or ext." << endl;
  cout << "Int or Ext?" << endl;
  cout << "Int - Type '1'" << endl;
  cout << "Ext - Type '2'" << endl;
  int locationChoice;
  int exactLocation;
  cin >> locationChoice;
  interior = 1;
  exterior = 2;
  if(locationChoice = interior)
  {
    cout << "INT.";
    //cerr << "asking for the exact location to be filled in." << endl;
    cin >> exactLocation;
  }
  else if (locationChoice = exterior)
  {
    cout << "EXT.";
    cin >> exactLocation;
  }
  else if (locationChoice > 2 || locationChoice < 1)
  {
    cout << "Sorry, you cannot use that number. Please use a number between 1 and 2.";
  }
}

void character()
{
  //cerr << "IF character, indenting and asking them to type in character name."<< endl;
  int userCharacter;
  cout << "           ";
  cin >> userCharacter;
  }
void dialogue()
{
    //cerr << "IF dialogue, indenting and allowing them to type dialogue." << endl;
}
void action()
{
    //cerr << "IF action, allowing for user input." << endl;
}



  //For this program, I would like for the user to be able to choose the following options:
  // - setting (int or ext, they will also be allowed to write in a specific location)
  // - character
  // - dialogue
  // - character actions
  // - an option to finish the script
  // The program should also indent properly as a script should.
  // The user will type in their data and the program will format their input in the form of a scriptwriting tool.
  // The purpose of the program is to give the user a draft of a script.

  // The program's sequence of specific actions are:
  // - a menu that the user will see, stating if the user wants to establish a new setting, have a character say something, describe an onscreen action, or finish the script.
  // According to the user's choice:
  // - "int or ext?" followed by a user input of the user's specific location for a new setting,
  // - "Input character name", followed by a user input of the user's character name and then dropping down to the following line for dialogue,
  // - a proper indent and user input for dialogue,
  // - a user input for character action,
  // - "You have completed your script. Look above to see your work" if the user has decided that the script is finished. The program will then close.

  // The sequence of actions that the user will take will be dependent on what the user chooses in the menu.

  //The results will be a draft of a script.

  // Calcualtions and Logic:
  // a loop will be used so that the user can continue writing the script as long as they want.
  // Switch statements will be used for each choice in the menu.

  // No additional files will be needed.
