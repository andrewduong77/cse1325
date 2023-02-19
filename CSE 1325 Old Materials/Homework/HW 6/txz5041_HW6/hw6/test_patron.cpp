#include "patron.h"

int main() {
  string name = "Shawn Gieser";
  string number = "817-272-6738";

  bool passed = true;

  Patron p(name, number);

  if (p.get_patron_name() != name) {
    cerr << "Name was '" << p.get_patron_name() << 
          "' should be '" << name << "'" << endl;
    passed = false;
  }

  if (p.get_patron_phone_number() != number) {
    cerr << "Number was '" << p.get_patron_phone_number()  << 
          "' should be '" << number << "'" << endl;
    passed = false;
  }

  string expected = "Shawn Gieser (817-272-6738)";
  if (p.to_string() != expected) {
    cerr << "to_string was '" << p.to_string() <<
            "' but should be '" << expected << endl;
    passed = false;
  }

  if (!passed) {
    cerr << "fail" << endl;
    return -1;
  }
  return 0;
}
