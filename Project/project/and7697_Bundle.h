#ifndef AND7697_BUNDLE_H_INCLUDED
#define AND7697_BUNDLE_H_INCLUDED

#include "and7697_Media.h"

using namespace std;

class Bundle
{
public:
    Bundle(string n, vector<Media> m) : name {n}, medias {m}, checked_out {false} {};
    string get_name();
    vector<Media> get_medias();
private:
    string name;
    vector<Media> medias;
    bool checked_out;
};

#endif // AND7697_BUNDLE_H_INCLUDED
