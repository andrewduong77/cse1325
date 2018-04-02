 #ifndef __GENRE_H
 #define __GENRE_H 201609
 #include <iostream>
 using namespace std;

 class Genre {
   public:
     Genre(int val) : value(val) { }

     static const int Action = 0;
     static const int Comedy = 1;
     static const int Drama = 2;
     static const int Fantasy = 3;
     static const int Documentary = 4;
     static const int Horror = 5;
     static const int Science_Fiction = 6;
     static const int Animated = 7;

    static const int num_genres = 8;

     string to_string() {
      switch(value) {
        case(Action):return "Action";
        case(Comedy):return "Comedy";
        case(Drama):return "Drama";
        case(Fantasy):return "Fantasy";
        case(Documentary):return "Documentary";
        case(Horror):return "Horror";
        case(Science_Fiction):return "Science Fiction";
        case(Animated):return "Animated";
        default: return "UNKNOWN";
       }
     }
   private:
     int value;
 };
 #endif
