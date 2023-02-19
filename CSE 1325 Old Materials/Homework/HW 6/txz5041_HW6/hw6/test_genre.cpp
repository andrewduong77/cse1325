#include "genre.h"
#include <iostream>
using namespace std;

int main() {

  Genre m1(Genre::Horror);
  if (m1.to_string() != "Horror") {
    cerr << "Horror failed: got " << m1.to_string() << endl;
    return 1;
  }

  return 0;
}
