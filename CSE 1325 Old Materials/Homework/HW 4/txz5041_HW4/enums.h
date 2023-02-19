 #ifndef ENUMS_H
 #define ENUMS_H 2017 

 #include <vector>
 #include <string>
 using namespace std;

 enum Age {G, PG, PG13, R, NC17};
 const vector<string> ages = {"G", "PG", "PG-13", "R", "NC-17"};

 enum Genre {Action, Comedy, Drama, Fantasy, Documentary, Horror, Science_Fiction, Animated};
 const vector<string> genres = {"Action", "Comedy", "Drama", "Fantasy", "Documentary", "Horror", "Science_Fiction", "Animated"};

 enum Mediaa {DVD, BluRay, Netflix, Amazon, HBOGO};
 const vector<string> medias = {"DVD", "BluRay", "Netflix", "Amazon", "HBOGO"};

 #endif
