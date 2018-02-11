#include "Date.h"

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
