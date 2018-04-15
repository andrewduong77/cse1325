#ifndef AND7697_TELEVISION_SHOW_SEASON_H_INCLUDED
#define AND7697_TELEVISION_SHOW_SEASON_H_INCLUDED

#include "and7697_Media.h"

class Television_Show_Season : public Media
{
public:
    Television_Show_Season(int idn, string cn, string t, string g, int r, string p, vector<string> va, vector<string> c, int sn) : Media(idn, cn, t, g), release_year {r}, producer {p}, voice_actors {va}, composers {c}, season_number {sn} {set_type("Television_Show_Season");};
    int get_release_year();
    string get_producer();
    string get_voice_actors() const;
    string get_composers() const;
    int get_season_number();
    string to_string() const;
    string to_string_file() const;
    friend ostream& operator<<(ostream& ost, const Television_Show_Season& television_show_season_two);
private:
    int release_year;
    string producer;
    vector<string> voice_actors;
    vector<string> composers;
    int season_number;
};

#endif // AND7697_TELEVISION_SHOW_SEASON_H_INCLUDED
