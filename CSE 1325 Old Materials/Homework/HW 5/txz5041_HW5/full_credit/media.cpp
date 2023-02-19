 #include "media.h"
 #include <string>
 #include <iostream>

 using namespace std;


 bool Media::is_checked_out() {return checked_out;}
 void Media::check_out(Patron& p_patron) {
   if (checked_out) {
     throw Invalid_transaction();
   } else {
     patron = p_patron;
     checked_out = true;
   }
 }
   
 void Media::check_in() {
   if (checked_out) {
     checked_out = false;
   } else {
     throw Invalid_transaction();
   }
 }

 string Media::to_string() {
   string med = "\"" + title + "\"" + " by " + " with " + leading_actor + ". Directed by " + director  + ", \n      " + copyright + " (" + target_age.to_string() + " " + genre.to_string() + " " + media_type.to_string() + ") \n      " + "ID: " + isbn;
   if (checked_out) {
      med += "\n      Checked out to " + patron.get_patron_name() + 
             " (" + patron.get_patron_phone_number() + ")";
   }
   return med;
 }
