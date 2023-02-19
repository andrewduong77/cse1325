 #ifndef __MEDIA_TYPE_H
 #define __MEDIA_TYPE_H 201609
 #include "string"
 using namespace std;

 class Media_Type {
   public:
     Media_Type(int val) : value(val) { }

     static const int DVD = 0;
     static const int Blueray = 1;
     static const int Netflix = 2;
     static const int Amazon = 3;
     static const int HBOGO = 4;

     static const int num_media_type = 5;

     string to_string() {
        switch(value) {
         case(DVD):return "DVD";
         case(Blueray):return "Blueray";
         case(Netflix):return "Netflix";
         case(Amazon):return "Amazon";
         case(HBOGO):return "HBOGO";
         default: return "UNKNOWN";
       }
     }
   private:
     int value;
 };
 #endif
