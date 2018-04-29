#include "and7697_Date.h"

int Date::get_year()
{
    return year;
}

int Date::get_month()
{
    return month;
}

int Date::get_day()
{
    return day;
}

// ostream& operator<<(ostream& ost, const Date& date_two)
// {
//     ost << date_two.month << " " << date_two.day << " " << date_two.year << endl;
//     return ost;
// }