 #include "age.h"
 #include <iostream>
 using namespace std;

 int main() {

   Age m1(Age::R);
   if (m1.to_string() != "R") {
     cerr << "R failed: got " << m1.to_string() << endl;
     return -1;
   }

   return 0;
 }
