#include "and7697_Book.h"

string Book::get_author()
{
    return author;
}

int Book::get_copyright_year()
{
    return copyright_year;
}

ostream& operator<<(ostream& ost, const Book& book_two)
{
    ost << R"(
======================
Book
======================
              )" << endl;
    ost << "ID Number: " << book_two.id_number << endl;
    ost << "Call Number: " << book_two.call_number << endl;
    ost << "Title: " << book_two.title << endl;
    ost << "Genre: " << book_two.genre << endl;
    ost << "Author: " << book_two.author << endl;
    return ost;
}
