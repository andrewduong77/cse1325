 #ifndef __VIDEO_STORE_H
 #define __VIDEO_STORE_H 201609
 #include "patron.h"
 #include "media.h"

 #include <iostream>
 #include <string>
 #include <vector>

 using namespace std;


 class Video_Store {
   public:
     void add_media(Media med);
     void add_patron(Patron pat);

     void check_out(int media_index, int patron_index);
     void check_in(int media_index);

     string media_to_string(int media_index);
     string patron_to_string(int patron_index);

     int number_of_medias();
     int number_of_patrons();

     void easter_egg();
   private:
     vector<Media> medias;
     vector<Patron> patrons;
 };
 #endif
