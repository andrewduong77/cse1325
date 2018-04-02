 #include "periodical.h"
 #include <string>
 #include <iostream>

 using namespace std;


 string Periodical::to_string() {
   string pub = "\"" + title + "\"" + " by " + author + ", " + copyright 
         + " (" + target_age.to_string() + " " + genre.to_string() 
         + (weekly ? " weekly " : (monthly ? " monthly " : " quarterly "))
         + media.to_string() + ")"
         + " ISBN: " + isbn;
   if (checked_out) {
      pub += "\nChecked out to " + patron.get_patron_name() + 
             " (" + patron.get_patron_phone_number() + ")";
   }
   return pub;
 }

 ostream& operator<<(ostream& os, Periodical& p) {
     os << p.to_string();
     return os;
 }
