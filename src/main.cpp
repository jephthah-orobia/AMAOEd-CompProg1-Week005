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

int main()
{
  // since we are dealing with money, we will use this type
  double budget;

  cout << "Daily budget: ";

  cin >> budget;

  cout << budget << " * " << budget << " = " << budget*budget << endl << endl;

  // Clear the input buffer so that the console doesn't exit immediately
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();

  return EXIT_SUCCESS;
}
