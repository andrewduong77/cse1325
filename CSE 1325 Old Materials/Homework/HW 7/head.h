#ifndef __HEAD_H
#define __HEAD_H

#include "robotParts.h"
//INHERITS FROM ROBOTPARTS
class Head : public RobotParts
{
public:
  Head()
  {
    
  };
 	Head(string n, int p, string t, double w, double c, string d) : RobotParts(n, p, t, w, c, d){};
 	void displayHeads();
};
#endif
