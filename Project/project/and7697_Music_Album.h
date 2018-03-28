#ifndef AND7697_MUSIC_ALBUM_H_INCLUDED
#define AND7697_MUSIC_ALBUM_H_INCLUDED

#include "and7697_Media.h"

class Music_Album : public virtual Media
{
public:
    Music_Album(int idn, string cn, string t, string g, int r, string a, vector<string> t) : Media(idn, cn, t, g), release_year {r}, artist {a}, tracks {t} {};
    int get_release_year();
    string get_artist();
    vector<string> get_tracks();
private:
    int release_year;
    string artist;
    vector<string> tracks;
};

#endif // AND7697_MUSIC_ALBUM_H_INCLUDED
