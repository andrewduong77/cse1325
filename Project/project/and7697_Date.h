#ifndef AND7697_DATE_H_INCLUDED
#define AND7697_DATE_H_INCLUDED

class Date
{
public:
    Date(int y, int m, int d) : year {y}, month {m}, day {d} {};
private:
    int year;
    int month;
    int day;
};

#endif // AND7697_DATE_H_INCLUDED
