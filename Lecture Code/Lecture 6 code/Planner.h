#include "Date.h"
#include <map>

class Planner{
public:
    Planner() {}; //Don't have to define in .cpp file
    bool add_event(Date d, string event);
    string get_event(Date d);
    Date get_date(string event);//return first date of an event occurence
    vector<Date> get_dates(string event);//return all dates of that event
    bool delete_event(Date d);
    void clear_planner(Date d);
private:
    map<Date, string> planner;
}
