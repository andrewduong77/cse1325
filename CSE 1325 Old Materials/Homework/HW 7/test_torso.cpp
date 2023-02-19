#include "test_torso.h"
#include "torso.h"
#include <iostream>
#include <string>

bool test_torso() {
  string expected = " ";
  bool passed = true;

  //Test Constructor

  string x_n = "torsocool";
  int x_p = 0013;
  string x_t = "superman";
  double x_w = 10.0;
  double x_c = 25.2;
  string x_d = "stops bullets";
  double x_power = 12;
  int x_b = 3;
  
  Torso torso{x_n, x_p, x_t, x_w, x_c, x_d, x_b};

  if (torso.n() != x_n ||
      torso.p() != x_p || 
      torso.t() != x_t ||
      torso.w() != x_w ||
      torso.c() != x_c ||
      torso.d() != x_d ||   
      torso.b() != x_b) {
      cerr << "#### Head constructor fail" << endl;
      cerr << "Expected: " << x_n << "," << 
			      x_p << "," <<  
			      x_t << "," <<
			      x_w << "," <<
			      x_c << "," <<
 			      x_d << "," <<
 			      x_b << "," << endl;
      passed = false;
  }

