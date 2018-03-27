#ifndef AND7697_MOVIE_H_INCLUDED
#define AND7697_MOVIE_H_INCLUDED

#include "and7697_Media.h"

class Movie
{
public:
    Movie(int r, string p, string d, vector<string> la) : release_year {r}, producer {p}, director {d}, leading_actors {la} {};
    int get_release_year();
    string get_producer();
    string get_director();
    vector<string> get_leading_actors();
private:
    int release_year;
    string producer;
    string director;
    vector<string> leading_actors;
};

#endif // AND7697_MOVIE_H_INCLUDED
