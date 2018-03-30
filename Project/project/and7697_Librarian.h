#ifndef AND7697_LIBRARIAN_H_INCLUDED
#define AND7697_LIBRARIAN_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Librarian
{
public:
    Librarian(string n, int idn) : name {n}, id {idn}, type {"Librarian"} {};
    void check_out();
    void check_in();
    string get_name();
    int get_id();
    void set_type(string type);
    string get_type();
protected:
    string type;
private:
    string name;
    int id;
};

#endif // AND7697_LIBRARIAN_H_INCLUDED
