#include "View.h"

class Controller{

public:
    Controller(Planner& p, View& v) : planner(p), view(v) {};
    void cli();
    void execute_cmd(int cmd);
    void delete_event_by_date();
    
private:
    Planner& planner;
    View& view;
};
