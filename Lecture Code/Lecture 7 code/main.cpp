//#include <iostream>
#include "Planner.h"

int main(){

    Planner planner {};
    Date d1 {2018,2,7,13,0,0};
    string e1 = "CSE 1325-001";
    if(planner.add_event(d1, e1))
        cout << "event added" << endl;
    if(!planner.add_event(d1, e1))
        cout << "event not added" << endl;
    Date d2 {2018,2,7,17,30,0};
    string e2 = "CSE 2100-001,002";
    Date d3 {2018,2,8,11,15,0};
    string e3 = "Baby Doc appt";
    Date d4 {2018,2,8,15,30,0};
    string e4 = "CSE 2312-001";
    if(planner.add_event(d2, e2))
        cout << "event added" << endl;
    if(planner.add_event(d3, e3))
        cout << "event added" << endl;
    if(planner.add_event(d4, e4))
        cout << "event added" << endl;
    planner.get_all_events();

    cout << planner.get_event(d1) << endl;
    
    cout << planner.get_date(e1) << endl;
    
    Date d5 {2018,2,12,13,0,0};
    if(planner.add_event(d5, e1))
        cout << "event added" << endl;
    vector<Date> dates = planner.get_dates(e1);
    for (Date d : dates)
        cout << d << endl;
        
    cout << "---------" << endl;
    planner.get_all_events();
    cout << "---------" << endl;
    planner.delete_date(d3);
    planner.get_all_events();
    cout << "---------" << endl;
    planner.delete_event(e2);
    planner.get_all_events();
    cout << "---------" << endl;
    planner.delete_events(e1);
    planner.get_all_events();
    cout << "---------" << endl;
    planner.add_event(d1,e1);
    planner.get_all_events();
    cout << "---------" << endl;
    planner.clear_planner();
    planner.get_all_events();
return 0;
}
