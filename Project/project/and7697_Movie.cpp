#include "and7697_Movie.h"

int Movie::get_release_year()
{
    return release_year;
}

string Movie::get_producer()
{
    return producer;
}

string Movie::get_director()
{
    return director;
}

ostream& operator<<(ostream& ost, const Movie& movie_two)
{
    // Output goes here
    return ost;
}

string Movie::get_leading_actors()
{
    string out;
    ostringstream fmtStr;
    if(leading_actors.size() == 0)
    {
        out = "Leading actors is not listed for this movie.\n";
        return out;
    }
    for(int i = 0; i < leading_actors.size(); i++)
    {
        fmtStr << endl << leading_actors[i];
        out = fmtStr.str();
    }
    return out;
}
