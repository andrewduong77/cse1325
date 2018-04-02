#ifndef __AGE_H
#define __AGE_H 201609
#include "string"
using namespace std;

class Age {
  public:
	Age(int val) : value(val) { }
	
	static const int G = 0;
	static const int PG = 1;
	static const int PG13 = 2;
	static const int R = 3;
	static const int NC17 = 4;

	static const int num_ages = 5;

	string to_string() {
	    switch(value) {
		case(G):return "G";
		case(PG):return "PG";
		case(PG13):return "PG-13";
		case(R):return "R";
		case(NC17):return "NC-17";
		default: return "UNKNOWN";
      }
    }
  private:
    int value;
};
#endif
