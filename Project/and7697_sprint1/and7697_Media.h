#ifndef AND7697_MEDIA_H_INCLUDED
#define AND7697_MEDIA_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Media
{
public:
    Media(int idn, string cn, string t, string g) : id_number {idn}, call_number {cn}, title {t}, genre {g}, checked_out {false}, type{"Media"} {};
    int get_id_number();
    string get_call_number();
    string get_title();
    string get_genre();
    void set_type(string type);
    string get_type();
protected:
    int id_number;
    string call_number;
    string title;
    string genre;
    string type;
private:
    bool checked_out;
};

#endif // AND7697_MEDIA_H_INCLUDED
