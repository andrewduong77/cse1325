#include "Planner.h"

class View{

    public:
        View(Planner& p) : planner(p) {};
        string get_menu();
        string view_all_events();
        string prompt_for_date();
        string prompt_for_event();
    
    private:
        Planner& planner;
};  
