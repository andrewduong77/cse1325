#ifndef AND7697_DATE_H_INCLUDED
#define AND7697_DATE_H_INCLUDED

#include <fstream>

class Date
{
public:
    Date(int y, int m, int d) : year {y}, month {m}, day {d} {};
    int get_year();
    int get_month();
    int get_day();
    // friend ostream& operator<<(ostream& ost, const Date& date_two);
private:
    int year;
    int month;
    int day;
};

#endif // AND7697_DATE_H_INCLUDED
