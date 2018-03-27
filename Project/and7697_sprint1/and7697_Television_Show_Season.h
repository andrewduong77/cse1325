#ifndef AND7697_TELEVISION_SHOW_SEASON_H_INCLUDED
#define AND7697_TELEVISION_SHOW_SEASON_H_INCLUDED

#include "and7697_Media.h"

class Television_Show_Season
{
public:
    Television_Show_Season(int r, string p, vector<string> d, vector<string> la, int sn) : release_year {r}, producer {p}, director {d}, leading_actors {la}, season_number {sn} {};
    int get_release_year();
    string get_producer();
    vector<string> get_director();
    vector<string> get_leading_actors();
    int get_season_number();
private:
    int release_year;
    string producer;
    vector<string> director;
    vector<string> leading_actors;
    int season_number;
};

#endif // AND7697_TELEVISION_SHOW_SEASON_H_INCLUDED
