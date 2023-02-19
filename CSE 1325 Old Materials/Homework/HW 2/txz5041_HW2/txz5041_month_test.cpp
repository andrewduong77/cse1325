#include <iostream>
#include "txz5041_month.cpp"

using namespace std;

int main() {

//test one
Month month{"May"};
month.add_day(70.2);
month.add_day(77.5);
month.add_day(83.4);
month.add_day(92.9);

if(month.name() != "May")
{
cout << "\n Error: Month not found in Test #1." << endl;
}

if(month.average_high() != 81.0)
{
cout << "Error: Wrong average temperature in Test #1." << endl;
}

//test two

Month monthtwo{"March"};
monthtwo.add_day(70.2);
monthtwo.add_day(77.5);
monthtwo.add_day(83.4);
monthtwo.add_day(92.9);

if(monthtwo.name() != "May")
{
cout << "\n Error: Month's name is not May in Test #2." << endl;
}

if(monthtwo.average_high() != 81.0)
{
cout << "Error: Wrong average temperature in Test #2." << endl;
}

//test three

Month month3{"May"};
month3.add_day(70.2);
month3.add_day(77.5);
month3.add_day(83.4);
month3.add_day(92.9);

if(month3.name() != "May")
{
cout << "\n Error: Month not found in Test #1." << endl;
}

if(month3.average_high() != 81.0)
{
cout << "Error: Wrong average temperature in Test #1." << endl;
}

}

