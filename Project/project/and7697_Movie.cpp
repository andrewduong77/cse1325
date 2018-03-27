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

vector<string> Movie::get_leading_actors()
{
    return leading_actors;
}
