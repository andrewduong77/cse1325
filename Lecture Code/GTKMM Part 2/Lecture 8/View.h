#include "Planner.h"
#include "dialog.h"

class View{

    public:
        View(Planner& p) : planner(p) {};
        int get_menu();
        void view_all_events();
        string prompt_for_date();
        string prompt_for_event();
    
    private:
        Planner& planner;
};  
