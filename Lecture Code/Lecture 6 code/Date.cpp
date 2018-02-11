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
    return std::to_string(year) + " " + std::to_string(month) + " " + std::to_string(day); // Using std:: because we are in Date's scope. It is trying to access the Date's to_string method, which doesn't work. So you have to go to std's scope
}

Date Date::operator+ (const Date& date_two)
{
    Date date_temp {0, 0, 0};
    date_temp.year = this->year + date_two.year;
    date_temp.month = this->month + date_two.month;
    date_temp.day = this->day + date_two.day    ;
    return date_temp;
}

bool Date::operator== (const Date& date_two)
{
    return ((this->year == date_two.year) && (this->month == date_two.month) && (this->day == date_two.day));
}

ostream& operator<<(ostream& ost, const Date& date)
{
    ost << date.to_string();
    return ost;
}
