#include <iostream>

using namespace std;

class Date
{
    public:
        Date(int y, int m, int d, int h, int min, int s)
        {
            year = y;
            month = m;
            day = d;
            hour = h;
            minute = min;
            second = s;
        }
        string to_string() const;
        bool operator<(const Date& date_two) const;
        friend ostream& operator<<(ostream& ost, const Date& date_two);
    private:
        int year, month, day, hour, minute, second;
}
