#include "and7697_Librarian.h"

void Librarian::check_out()
{

}

void Librarian::check_in()
{

}

string Librarian::get_name()
{
    return name;
}

int Librarian::get_id()
{
    return id;
}

void Librarian::set_type(string type)
{
    this->type = type;
}

string Librarian::get_type()
{
    return type;
}

string Librarian::to_string() const
{
    string out;
    ostringstream ost;
    ost << R"(
======================
Librarian
======================
              )" << endl;
    ost << "Name: " << this->name << endl;
    ost << "ID: " << this->id << endl;
    out = ost.str();
    return out;
}

string Librarian::to_string_file() const
{
    string out;
    ostringstream ost;
    ost << this->name << ";"
        << this->id << endl;
    out = ost.str();
    return out;
}

ostream& operator<<(ostream& ost, const Librarian& librarian_two)
{
    ost << R"(
======================
Librarian
======================
              )" << endl;
    ost << "Name: " << librarian_two.name << endl;
    ost << "ID: " << librarian_two.id << endl;
    return ost;
}
