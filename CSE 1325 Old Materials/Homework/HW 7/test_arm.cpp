#include "test_arm.h"
#include "arm.h"
#include <iostream>
#include <string>

bool test_arm() {
  string expected = " ";
  bool passed = true;

  //Test Constructor

  string x_n = "armi";
  int x_p = 5;
  string x_t = "short";
  double x_w = 2.8;
  double x_c = 5.92;
  string x_d = "a small by hand arm";
  double x_power = 12;
  
  Arm arm{x_n, x_p, x_t, x_w, x_c, x_d, x_power};

  if (arm.n() != x_n ||
      arm.p() != x_p || 
      arm.t() != x_t ||
      arm.w() != x_w ||
      arm.c() != x_c ||   
      arm.d() != x_d ||  
      arm.power() != x_power) {
      cerr << "#### Arm constructor fail" << endl;
      cerr << "Expected: " << x_n << "," << 
			      x_p << "," <<  
			      x_t << "," <<
			      x_w << "," <<
			      x_c << "," <<
 			      x_d << "," <<
 			      x_power  << endl;
      passed = false;
  }

  return passed;
} 





