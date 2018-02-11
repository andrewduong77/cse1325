#include <iostream>

using namespace std;

class Date {
public:
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    
    void add_day(int num)
    {
        day += num;
    }
    
    void add_day();
    
    int get_year();
    
    int get_month();
    
    int get_day();
    
    void set_month(int m);
    
    string to_string() const;
    
    Date operator+(const Date& date_two);
    
    friend ostream& operator<<(ostream& ost, const Date& date);
private:
    int year, month, day;
};

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

ostream& operator<<(ostream& ost, const Date& date)
{
    ost << date.to_string();
    return ost;
}

int main () {
    Date date { 2018, 1, 29 };
    //date.year = 1111; Not working due to private Variable
    //cout << date.year;
    cout << date.get_year() << endl; 
    date.set_month(26);
    cout << date.get_month() << endl;   
    //date.add_day(2);
    //cout << date.get_day() << endl;
    //date.add_day();
    //cout << date.get_day() << endl;
    cout << date.to_string() << endl;
    
    Date date_two { 1, 0, 1};
    date = date + date_two;
    cout << date.to_string() << endl;
    
    cout << date << endl;
return 0;
}
