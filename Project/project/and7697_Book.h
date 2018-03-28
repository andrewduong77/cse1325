#ifndef AND7697_BOOK_H_INCLUDED
#define AND7697_BOOK_H_INCLUDED

#include "and7697_Media.h"

class Book : public virtual Media
{
public:
    Book(int idn, string cn, string t, string g, string a, int c) : Media(idn, cn, t, g), author {a}, copyright_year {c} {};
    string get_author();
    int get_copyright_year();
public:
    string author;
    int copyright_year;
};

#endif // AND7697_BOOK_H_INCLUDED
