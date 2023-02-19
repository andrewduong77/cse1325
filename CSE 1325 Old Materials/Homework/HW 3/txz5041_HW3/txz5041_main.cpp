#include <iostream>
#include "txz5041_puzzle.h"
#include "txz5041_fuse.h"

using namespace std;

int main() {


  string solution;
  cout << "\n\nEnter solution string (lower case letters only): ";
  getline(cin, solution);
  Puzzle puzzle{solution};
  for(int i=0; i<80; ++i) cout << endl;

  Fuse fuse{8};            
  char guess;              
  string proposed_solution; 
  bool is_winner = false;  

  
  cout << "         =================" << endl
       << "             B O O M !"     << endl 
       << "         =================" << endl << endl;
  cout << "Enter lower case letters to guess, " << endl
       << "! to propose a solution," << endl
       << "0 to exit." << endl << endl;
  
  while(true) {

    cout << endl << endl << fuse.to_string() << puzzle.to_string() << ": ";
    cin >> guess;

    if (guess == '0') {
      exit(0);

    } else if (guess == '!') {
      cout << "Disarming the firecracker - what is the solution? ";
      cin.ignore();
      getline(cin, proposed_solution);
      is_winner = puzzle.solve(proposed_solution);
      break;

    } else {
      if (puzzle.guess(guess)) {
        if (!fuse.burn()) break;
       } else {
        cerr << "Invalid character - try again" << endl;
      }
    }
  }

  if (is_winner) {
    cout << "*** W I N N E R ***" << endl;
  } else {
    cout << "###### BOOM ######" << endl;
    cout << "The answer was: '" << puzzle.get_solution() << "'" << endl;
  }
}
