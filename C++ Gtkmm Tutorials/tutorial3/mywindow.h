#ifndef MYWINDOW_H_INCLUDED
#define MYWINDOW_H_INCLUDED

#include <gtkmm.h>

class mywindow : public Gtk::Window
{
    public:
        mywindow();
        virtual ~mywindow();
    protected:
        void on_big_button1_click();
        void on_button2_click();
        void on_button3_click();
        void on_quit_click();
        void dialog(Glib::ustring msg);
    private:
};

#endif // MYWINDOW_H_INCLUDED
