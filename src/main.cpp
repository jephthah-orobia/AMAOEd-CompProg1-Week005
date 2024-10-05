/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd-Comp1-Week5 LabWorks
 * @app desc: To complete task stated in LabortoryExercise004 of ITE7101
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include "_pause.h"

using namespace std;

int main()
{
  string name, password, address;

  cout << "Name: ";
  getline(cin, name);

  cout << "Password: ";
  getline(cin, password);
  
  cout << "Address: ";
  getline(cin, address);

  cout << endl << "Hi, I am " << name << ". I live at " << address << "." << endl << endl;

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();

  return EXIT_SUCCESS;
}
