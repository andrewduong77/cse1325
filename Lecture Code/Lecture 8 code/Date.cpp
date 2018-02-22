#include "Date.h"

//using namespace std;

int Date::get_year() {

    return year;

}

int Date::get_month() {

    return month;

}

int Date::get_day() {

    return day;

}

void Date::set_month(int m)
{

    if (m > 0 && m < 13)
        month = m;
    else
        cout << "Not a valid month" << endl;
}

void Date::add_day()
{
    day++;
}

string Date::to_string() const
{
    return std::to_string(year) + " " + std::to_string(month) + " " + std::to_string(day) + " " + std::to_string(hour) + " " + std::to_string(minute) + " " + std::to_string(second);
}

Date Date::operator+ (const Date& date_two)
{
    Date date_temp {0, 0, 0, 0, 0, 0};
    date_temp.year = this->year + date_two.year;
    date_temp.month = this->month + date_two.month;
    date_temp.day = this->day + date_two.day;
    date_temp.hour = this->hour + date_two.hour;
    date_temp.minute = this->minute + date_two.minute;
    date_temp.second = this->second + date_two.second;
    return date_temp;
}

bool Date::operator== (const Date& date_two)
{
    return ((this->year == date_two.year) && (this->month == date_two.month) && (this->day == date_two.day) && (this->hour == date_two.hour) && (this->minute == date_two.minute) && (this->second == date_two.second));
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

ostream& operator<<(ostream& ost, const Date& date)
{
    ost << date.to_string();
    return ost;
}

void Date::set_year(int y)
{
    year = y;
}

void Date::set_day(int d)
{
    day = d;
}

void Date::set_hour(int h)
{
    hour = h;
}

void Date::set_minute(int min)
{
    minute = min;
}

void Date::set_second(int s)
{
    second = s;
}
