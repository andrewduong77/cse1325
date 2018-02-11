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
private:
    int year, month, day, hour, minute, second;
};
