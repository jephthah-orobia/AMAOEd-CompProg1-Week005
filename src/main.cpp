/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd-Comp1-Week5 LabWorks
 * @app desc: To complete task stated in LabortoryExercise004 of ITE7101
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <limits>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main()
{
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************

  char name[50];

  const char* divider = "\n================================================\n";

  cout << "Let's try basic input-output console routine!" << endl << divider << endl;

  cout << "What is your first name? ";

  cin >> name;

  cout << "Hello " << name << endl << divider << endl;

  // Clear the input buffer so that the console doesn't exit immediately
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();

  return EXIT_SUCCESS;
}
