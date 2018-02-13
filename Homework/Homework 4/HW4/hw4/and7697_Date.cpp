#include "and7697_Date.h"

string Date::to_string() const
{
    return std::to_string(year) + " " + std::to_string(month) + " " + std::to_string(day) + " " + std::to_string(hour) + " " + std::to_string(minute) + " " + std::to_string(second);
}

bool Date::operator<(const Date& date_two) const
{
    if (this->year < date_two.year)
        return true;
    if (this->year > date_two.year)
        return false;
    if(this->month < date_two.month)
        return true;
    if(this->month > date_two.month)
        return false;
    if(this->day < date_two.day)
        return true;
    if(this->day > date_two.day)
        return false;
    if(this->hour < date_two.hour)
        return true;
    if(this->hour > date_two.hour)
        return false;
    if(this->minute < date_two.minute)
        return true;
    if(this->minute > date_two.minute)
        return false;
    if(this->second < date_two.second)
        return true;
    return false;
}

ostream& operator<<(ostream& ost, const Date& date_two)
{
    ost << date_two.to_string();
    return ost;
}
