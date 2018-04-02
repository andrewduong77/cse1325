#include <iostream>
using namespace std;

class Month
{
    private:
    string month_name;
	double highs;
    double num_days;

	public:
 	Month(string name):month_name{name},highs{0},num_days{0}{}


	string name()
	{
	 return month_name;
	}

	void add_day(double temperature) // double temp
	{
	 highs = highs + temperature;
	 num_days++;
	}

	double average_high()
	{
    double avg;
        if(num_days == 0)
        {
            avg = 75;
        }
        else
        {
            avg = highs/num_days;
        }
	 return avg;
	}
};

