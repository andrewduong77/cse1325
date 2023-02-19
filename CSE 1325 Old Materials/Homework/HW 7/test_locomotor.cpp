#include "test_locomotor.h"
#include "locomotor.h"
#include <iostream>
#include <string>

bool test_locomotor() {
  string expected = " ";
  bool passed = true;

  //Test Constructor

  string x_n = "locomotorboat";
  int x_p = 0675;
  string x_t = "fast";
  double x_w = 12.5;
  double x_c = 18.9;
  string x_d = "simple locomotor";
  double x_power = 15;
  int x_speed = 30;
  
  Locomotor locomotor{x_n, x_p, x_t, x_w, x_c, x_d, x_power, x_speed};

  if (locomotor.n() != x_n ||
      locomotor.p() != x_p || 
      locomotor.t() != x_t ||
      locomotor.w() != x_w ||
      locomotor.c() != x_c ||   
      locomotor.d() != x_d ||  
      locomotor.power() != x_power ||
      locomotor.speed() != x_speed) {
      cerr << "#### Locomotor constructor fail" << endl;
      cerr << "Expected: " << x_n << "," << 
			      x_p << "," <<  
			      x_t << "," <<
			      x_w << "," <<
			      x_c << "," <<
 			      x_d << "," <<
 			      x_power  << "," <<
			      x_speed << endl;
      passed = false;
  }

  return passed;
} 





