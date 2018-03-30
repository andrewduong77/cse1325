#include "and7697_Bundle.h"

string Bundle::get_name()
{
    return name;
}

vector<Media> Bundle::get_medias()
{
    return medias;
}

void Bundle::set_type(string type)
{
    this->type = type;
}

string Bundle::get_type()
{
    return type;
}
