#include "test_battery.h"
#include "battery.h"
#include <iostream>
#include <string>

bool test_battery() {
  string expected = " ";
  bool passed = true;

  //Test Constructor

  string x_n = "duracellery";
  int x_p = 2;
  string x_t = "fat";
  double x_w = 0.5;
  double x_c = 1.5;
  string x_d = "one battery to last all day";
  double x_energy = 12;
  
  Battery battery{x_n, x_p, x_t, x_w, x_c, x_d, x_energy};

  if (battery.n() != x_n ||
      battery.p() != x_p || 
      battery.t() != x_t ||
      battery.w() != x_w ||
      battery.c() != x_c ||   
      battery.d() != x_d ||  
      battery.energy() != x_energy) {
      cerr << "#### Battery constructor fail" << endl;
      cerr << "Expected: " << x_n << "," << 
			      x_p << "," <<  
			      x_t << "," <<
			      x_w << "," <<
			      x_c << "," <<
 			      x_d << "," <<
 			      x_energy  << endl;
      passed = false;
  }

  return passed;
} 





