#ifndef AND7697_DIALOG_H_INCLUDED
#define AND7697_DIALOG_H_INCLUDED

#ifndef AND7697_DIALOG_H
#define AND7697_DIALOG_H

#include <gtkmm.h>

class Dialog : public Gtk::Window
{
public:
    Dialog();
    virtual ~Dialog();
protected:
    void on_browse_catalog_button_click();
    void on_add_button_click();
    void on_check_in_button_click();
    void on_check_out_button_click();
    void on_save_button_click();
    void on_load_button_click();
    void on_exit_button_click();
    void on_add_transaction_button_click();
    void on_add_customer_button_click();
    void on_add_librarian_button_click();
    void on_add_bundle_click();
    void on_add_book_button_click();
    void on_add_movie_button_click();
    void on_add_video_game_button_click();
    void on_add_music_album_button_click();
    void on_add_television_show_season_button_click();
    void dialog(Glib::ustring msg);
private:
};

#endif // AND7697_DIALOG_H

#endif // AND7697_DIALOG_H_INCLUDED
