 #ifndef __MEDIA_H
 #define __MEDIA_H 201609
 #include "patron.h"
 
 #include "media_type.h"
 #include "genre.h"
 #include "age.h"

 #include <iostream>
 #include <string>

 using namespace std;


 class Media {
   public:
     Media(string p_title, 
                 string p_leading_actor,
                 string p_director, 
                 string p_copyright,
                 Genre p_genre, 
                 Media_Type p_media_type, 
                 Age p_target_age,
                 string p_id) : 

                 title(p_title), 
                 leading_actor(p_leading_actor),
                 director(p_director),
                 copyright(p_copyright), 
                 genre(p_genre), 
                 media_type(p_media_type),
                 target_age(p_target_age), 
                 isbn(p_id), 
                 patron(Patron()),
                 checked_out(false) { }

     bool is_checked_out();

     void check_out(Patron& patron);
     void check_in();

     string to_string();

     class Invalid_transaction { }; 

   private:
     string title;
     string leading_actor;
     string director;
     string copyright;
     Genre genre;
     Media_Type media_type;
     Age target_age;
     string isbn;
     Patron patron;
     bool checked_out;
 };
 #endif
