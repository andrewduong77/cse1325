#include <iostream>
#include <string>
#include "txz5041_month.cpp"
using namespace std;

int main()
{

    string name;
    double temperature;
    int count=0;

    cout << "Enter the name of the month:" << endl;
    getline(cin, name);

    Month month(name);

    do
        { cout<<"Enter Day "<<count+1<<"'s high temperature: ";
          cin>>temperature;
          count++;
          if(temperature>=-998)
        {month.add_day(temperature);
            }
            }
        while(temperature>=-998);
        cout<<month.name()<<" has an average temperature of "<<month.average_high()<<"\n";
    }


