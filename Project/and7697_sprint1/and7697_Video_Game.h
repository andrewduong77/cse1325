#ifndef AND7697_VIDEO_GAME_H_INCLUDED
#define AND7697_VIDEO_GAME_H_INCLUDED

#include "and7697_Media.h"

class Video_Game
{
public:
    Video_Game(int r, string s) : release_year {r}, studio {s} {};
    int get_release_year();
    string get_studio();
private:
    int release_year;
    string studio;
};

#endif // AND7697_VIDEO_GAME_H_INCLUDED
