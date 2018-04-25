#include "and7697_Music_Album.h"

int Music_Album::get_release_year()
{
    return release_year;
}

string Music_Album::get_artist()
{
    return artist;
}

string Music_Album::get_tracks() const
{
    string out;
    ostringstream fmtStr;
    if(tracks.size() == 0)
    {
        out = "N/A";
        return out;
    }
    for(int i = 0; i < tracks.size(); i++)
    {
        fmtStr << endl << "    " << i + 1 << " " << tracks[i];
        out = fmtStr.str();
    }
    return out;
}

string Music_Album::get_tracks_string() const
{
    string out;
    ostringstream fmtStr;
    if(tracks.size() == 0)
    {
        out = "N/A";
        return out;
    }
    for(int i = 0; i < tracks.size(); i++)
    {
        fmtStr << tracks[i];
        if(i < tracks.size() - 1)
            fmtStr << ";";
        out = fmtStr.str();
    }
    return out;
}

string Music_Album::to_string() const
{
    string out;
    ostringstream ost;
    ost << R"(
== Music Album ==
              )" << endl;
    ost << "    ID Number: " << this->id_number << endl;
    ost << "    Call Number: " << this->call_number << endl;
    ost << "    Title: " << this->title << " (" << this->release_year << ")" << endl;
    ost << "    Genre: " << this->genre << endl;
    ost << "    Artist: " << this->artist << endl;
    ost << "    Tracks: " << this->get_tracks() << endl;
    out = ost.str();
    return out;
}

string Music_Album::to_string_file() const
{
    string out;
    ostringstream ost;
    ost << this->type << ";"
        << this->id_number << ";"
        << this->call_number << ";"
        << this->title << ";"
        << this->genre << ";"
        << this->artist << ";"
        << this->get_tracks_string() << endl;
    out = ost.str();
    return out;
}

ostream& operator<<(ostream& ost, const Music_Album& music_album_two)
{
    ost << R"(
== Music Album ==
              )" << endl;
    ost << "    ID Number: " << music_album_two.id_number << endl;
    ost << "    Call Number: " << music_album_two.call_number << endl;
    ost << "    Title: " << music_album_two.title << " (" << music_album_two.release_year << ")" << endl;
    ost << "    Genre: " << music_album_two.genre << endl;
    ost << "    Artist: " << music_album_two.artist << endl;
    ost << "    Tracks: " << music_album_two.get_tracks() << endl;
    return ost;
}
