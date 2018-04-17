#include "Planner.h"

bool Planner::add_event(Date d, string event)
{
    return planner.insert(make_pair(d,event)).second;
}

void Planner::get_all_events()
{
    if(planner.size() == 0)
    {
        cout << "nothing in planner" << endl;
        return;
    }
    map<Date,string>::iterator it =  planner.begin();
    for(;it != planner.end();it++)
        cout << it->first << " - " << it->second << endl;
}

string Planner::get_event(Date d)
{
    if (planner.count(d) > 0)
        cout << "Event found for " << d<< endl;
    else 
        cout << "Event not found for " << d << endl;

    return planner[d];
}

Date Planner::get_date(string event)
{
    map<Date,string>::iterator it =  planner.begin();
    for(;it != planner.end();it++)
        if(it->second == event)
            return it->first;
    Date temp {0,0,0,0,0,0};
    return temp;
}

vector<Date> Planner::get_dates(string event)
{
    vector<Date> d;
    map<Date,string>::iterator it =  planner.begin();
    for(;it != planner.end();it++)
        if(it->second == event)
            d.push_back(it->first);
    return d;
}

bool Planner::delete_date(Date d)
{
    int result = planner.erase(d);
    if( result == 1)
        return true;
    return false;
}

bool Planner::delete_event(string event)
{
    map<Date,string>::iterator it =  planner.begin();
    for(;it != planner.end();it++)
        if(it->second == event)
        {
            planner.erase(it->first);
            return true;
        }
    return false;
}

bool Planner::delete_events(string event)
{
    map<Date,string>::iterator it =  planner.begin();
    for(;it != planner.end();it++)
        if(it->second == event)
            planner.erase(it->first);
    return false;
}

void Planner::clear_planner()
{
    //Go over in class due to map operation
    map<Date,string>::iterator it =  planner.begin();
    for(;it != planner.end();it++)
            planner.erase(it->first);
}
