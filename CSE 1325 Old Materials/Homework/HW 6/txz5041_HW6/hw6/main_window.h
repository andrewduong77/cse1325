#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include "controller.h"
#include <gtkmm.h>

class Main_window : public Gtk::Window
{
    public:
        Main_window(Controller& controller);
        virtual ~Main_window();
    protected:
        void on_list_meds_click();        
        void on_add_med_click();          
        void on_checkout_click();         
        void on_checkin_click();          
        void on_list_patrons_click();     
        void on_add_patron_click();      
        void on_manual_click();           
        void on_about_click();            
        void on_quit_click();             
        void on_test_click();             
    private:
        Gtk::Label *msg;                  
        Controller& _controller;          
};
#endif 

