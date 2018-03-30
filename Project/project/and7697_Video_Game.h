#ifndef AND7697_VIDEO_GAME_H_INCLUDED
#define AND7697_VIDEO_GAME_H_INCLUDED

#include "and7697_Media.h"

class Video_Game : public virtual Media
{
public:
    Video_Game(int idn, string cn, string t, string g, int r, string s) : Media(idn, cn, t, g), release_year {r}, studio {s} {set_type("Video_Game");};
    int get_release_year();
    string get_studio();
private:
    int release_year;
    string studio;
};

#endif // AND7697_VIDEO_GAME_H_INCLUDED
