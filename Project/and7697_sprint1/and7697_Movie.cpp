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

string Movie::get_leading_actors() const
{
    string out;
    ostringstream fmtStr;
    if(leading_actors.size() == 0)
    {
        out = "N/A";
        return out;
    }
    for(int i = 0; i < leading_actors.size(); i++)
    {
        fmtStr << leading_actors[i];
        if(i < leading_actors.size() - 1)
            fmtStr << ", "; // print commas
        out = fmtStr.str(); // convert
    }
    return out;
}

ostream& operator<<(ostream& ost, const Movie& movie_two)
{
    ost << R"(
======================
Movie
======================
              )" << endl;
    ost << "ID Number: " << movie_two.id_number << endl;
    ost << "Call Number: " << movie_two.call_number << endl;
    ost << "Title: " << movie_two.title << " (" << movie_two.release_year << ")" << endl;
    ost << "Genre: " << movie_two.genre << endl;
    ost << "Producer: " << movie_two.producer << endl;
    ost << "Director: " << movie_two.director << endl;
    ost << "Leading Actors: " << movie_two.get_leading_actors() << endl;
    return ost;
}
