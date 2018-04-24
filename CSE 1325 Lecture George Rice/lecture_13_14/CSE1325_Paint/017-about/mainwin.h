#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include "view.h"

class Mainwin : public Gtk::Window {
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        void on_quit_click();                // Exit the program
        void on_new_click();                 // Create a new drawing
        void on_open_click();                // Open the drawing
        void on_save_click();                // Save the drawing
        void on_save_as_click();             // Save the drawing to a new file
        void on_undo_click();                // Undo the last operation
        void on_color_click();               // Set the pen color
        void on_width_click();               // Set the pen width
        void on_pen_mode_segment_click();    // Set pen mode to segments 
        void on_pen_mode_contiguous_click(); // Set pen mode to contiguous
        void on_pen_mode_freehand_click();   // Set pen mode to freehand
        void on_dash_pattern_click();        // Set dash pattern
        void on_about_click();               // Display About dialog
    private:
        View *view;                          // The drawing area
};
#endif