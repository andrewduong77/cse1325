#include <iostream>
#include <sstream>

using namespace std;

int main () {

string name = "First Middle Last";

istringstream iss {name};

string word;

iss >> word;

cout << word << endl;

}
