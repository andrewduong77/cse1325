#include "and7697_Media.h"

int Media::get_id_number()
{
    return id_number;
}

string Media::get_call_number()
{
    return call_number;
}

string Media::get_title()
{
    return title;
}

string Media::get_genre()
{
    return genre;
}

void Media::set_type(string type)
{
    this->type = type;
}

string Media::get_type()
{
    return type;
}

string Media::to_string() const
{

}
