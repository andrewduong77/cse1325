
 #include "media_type.h"
 #include <iostream>
 using namespace std;

 int main() {

   Media_Type m1(Media_Type::BlueRay);
   if (m1.to_string() != "BlueRay") {
     cerr << "BlueRay failed: got " << m1.to_string() << endl;
     return -1;
   }

   return 0;
 }
