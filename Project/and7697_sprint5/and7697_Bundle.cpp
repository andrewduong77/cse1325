#include "and7697_Bundle.h"


void Bundle::add_to_bundle(Media *media)
{
    medias.push_back(media);
}

void Bundle::remove_from_bundle(int id)
{
    for(int i = 0; i < medias.size(); i++)
        if(medias[i]->get_id_number() == id)
            medias.erase(medias.begin()+i);
}

string Bundle::get_name()
{
    return name;
}

vector<Media*> Bundle::get_medias()
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