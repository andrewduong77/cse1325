#include "Date.h"
#include <map>
#include <vector>

class Planner{
public:
    Planner() {}; //Don't have to define in .cpp file
    bool add_event(Date d, string event);
    string get_all_events();
    string get_event(Date d);
    Date get_date(string event);//return first date of an event occurence
    vector<Date> get_dates(string event);//return all dates of that event
    bool delete_date(Date d);
    bool delete_event(string event);
    bool delete_events(string event);
    void clear_planner();
private:
    map<Date, string> planner;
};
