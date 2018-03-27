#ifndef AND7697_BOOK_H_INCLUDED
#define AND7697_BOOK_H_INCLUDED

#include "and7697_Media.h"

class Book
{
public:
    Book(string a, int c) : author {a}, copyright_year {c} {};
    string get_author();
    int get_copyright_year();
private:
    string author;
    int copyright_year;
};

#endif // AND7697_BOOK_H_INCLUDED
