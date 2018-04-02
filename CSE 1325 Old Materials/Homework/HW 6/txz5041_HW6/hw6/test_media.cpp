#include "media.h"
#include "patron.h"
#include <iostream>
using namespace std;

int main() {
  string expected = "\"The Ring\" with Naomi Watts. Directed by Gore Verbinski (2002) (Horror) (PG-13) BlueRay ID: 0001";
  string expected_co = "\"The Ring\" with Naomi Watts. Directed by Gore Verbinski (2002) (Horror) (PG-13) BlueRay ID: 0001\nChecked out to Shawn Geiser (817-272-6738)";

  string name = "Shawn Gieser";
  string number = "817-272-6738";

  Patron patron(name, number);

  bool passed = true;


  Media media(
  	  "The Ring", 
   	  "Naomi Watts", 
  	  "Gore Verbinski",
   	  "2002", 
   	  Genre::Horror,
   	  Mediaa::BluRay,
   	  Age::PG13,
   	  "0001"  
  );

  if (media.to_string() != expected) {
    cerr << "Constructor fail: got '" << media.to_string() 
         << "' but expecting '" << expected << "'" << endl;
    passed = false;
  }

  //
  // Test check_out(patron)
  //
  media.check_out(patron);

  if (!media.is_checked_out()) {
    cerr << "is_checked_out() reported false after check_out(patron)" << endl;
    passed = false;
  }
    
  if (media.to_string() != expected_co) {
    cerr << "Check out fail: got '" << media.to_string() 
         << "' but expecting '" << expected_co << "'" << endl;
    passed = false;
  }

  //
  // Test check_in()
  //

  media.check_in();

  if (media.is_checked_out()) {
    cerr << "is_checked_out() reported true after check_in()" << endl;
    passed = false;
  }
    
  if (media.to_string() != expected) {
    cerr << "Check in fail: got '" << media.to_string() 
         << "' but expecting '" << expected << "'" << endl;
    passed = false;
  }

  //
  // Report results
  //

  if (!passed) {
    cerr << "fail" << endl;
    return -1;
  }

  return 0;
}
