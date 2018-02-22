#include <iostream>
using namespace std;

class Date {
public:
    Date(int y, int m, int d, int h, int min, int s): year{y}, month{m}, day{d}, hour{h}, minute {min}, second{s} {};
    
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
    
    bool operator==(const Date& date_two);
    
    bool operator<(const Date& date_two) const;
    
    friend ostream& operator<<(ostream& ost, const Date& date);
    
    void set_year(int y);
    
    //void set_month();
    
    void set_day(int d);
    
    void set_hour(int h);
    
    void set_minute(int min);
    
    void set_second(int s);
private:
    int year, month, day, hour, minute, second;
};
