#include "test_battery.h"
#include "test_arm.h"
#include "test_head.h"
#include "test_torso.h"
#include "test_locomotor.h"
#include <iostream>

int main() {
  if (!(test_battery() &&
        test_arm() &&
        test_head() &&
        test_torso() &&
        test_locomotor()))
    cerr << "fail" << std::endl;
} 
