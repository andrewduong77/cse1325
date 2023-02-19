#include "test_head.h"
#include "head.h"
#include <iostream>
#include <string>

bool test_head() {
  string expected = " ";
  bool passed = true;

  //Test Constructor

  string x_n = "header";
  int x_p = 2243;
  string x_t = "bobble";
  double x_w = 4.9;
  double x_c = 7.12;
  string x_d = "goes bobble wooble";
  double x_power = 12;
  
  Head head{x_n, x_p, x_t, x_w, x_c, x_d};

  if (head.n() != x_n ||
      head.p() != x_p || 
      head.t() != x_t ||
      head.w() != x_w ||
      head.c() != x_c ||   
      head.d() != x_d) {
      cerr << "#### Head constructor fail" << endl;
      cerr << "Expected: " << x_n << "," << 
			      x_p << "," <<  
			      x_t << "," <<
			      x_w << "," <<
			      x_c << "," <<
 			      x_d << "," << endl;
      passed = false;
  }

  return passed;
} 


