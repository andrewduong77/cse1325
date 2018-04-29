#ifndef AND7697_BUNDLE_H_INCLUDED
#define AND7697_BUNDLE_H_INCLUDED

#include "and7697_Media.h"

class Bundle
{
public:
    Bundle(string n, vector<Media*> m) : name {n}, medias {m}, checked_out {false} {set_type("Bundle");};
    void add_to_bundle(Media *media);
    void remove_from_bundle(int id);
    string get_name();
    vector<Media*> get_medias();
    void set_type(string type);
    string get_type();
protected:
    string type;
private:
    string name;
    vector<Media*> medias;
    bool checked_out;
};

#endif // AND7697_BUNDLE_H_INCLUDED
