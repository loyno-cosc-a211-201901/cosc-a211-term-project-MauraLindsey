#include <iostream>
using namespace std;
int main()
{
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

  return 0;
}
