#include "Controller.h"

void Controller::cli()
{
    int cmd = -1;
    while(cmd != 0)
    {
        cout << view.get_menu() << endl;
        cin >> cmd;
        execute_cmd(cmd);
    }
}

void Controller::execute_cmd(int cmd)
{
    string event_name;
    Date date {0,0,0,0,0,0};
    int y, m, d, h, min, s;
    switch(cmd)
    {
        case 1:
            cout << view.view_all_events();
            planner.get_all_events();
//            test();
            break;
        case 2:
            cout << view.prompt_for_date();
            //int y, m, d, h, min, s;
            cin >> y >> m >> d >> h >> min >> s;
            cin.ignore();
            cout << view.prompt_for_event();
            //string event_name;
            cin >> event_name;
            date.set_year(y);
            date.set_month(m);
            date.set_day(d);
            date.set_hour(h);
            date.set_minute(min);
            date.set_second(s);
            planner.add_event(date, event_name);
            break;
        case 3:
            delete_event_by_date();
        case 0:
            break;
        default:
            cout << "invalid option";
    }
}

void Controller::delete_event_by_date()
{
    cout << view.prompt_for_date();
    int y, m, d, h, min, s;
    cin >> y >> m >> d >> h >> min >> s;
    cin.ignore();
    Date date {y, m, d, h, min, s};
    planner.delete_date(date);
}
