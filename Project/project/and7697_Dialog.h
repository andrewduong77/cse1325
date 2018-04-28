#ifndef AND7697_DIALOG_H_INCLUDED
#define AND7697_DIALOG_H_INCLUDED

#ifndef AND7697_DIALOG_H
#define AND7697_DIALOG_H

#include "and7697_Library.h"
#include "and7697_Book.h"
#include "and7697_Movie.h"
#include "and7697_Video_Game.h"
#include "and7697_Music_Album.h"
#include "and7697_Television_Show_Season.h"

#include <gtkmm.h>

class Dialog : public Gtk::Window
{
public:
    Dialog(Library& l);
    virtual ~Dialog();
protected:
    // ***For Main Menu***
    void on_browse_catalog_button_click();
    void on_view_checked_out_list_button_click();
    void on_add_button_click();
    // *Check In*
    void on_check_in_button_click();
    void on_check_in_ok_button_click();
    void on_check_in_cancel_button_click();
    // *Check Out*
    void on_check_out_button_click();
    void on_check_out_ok_button_click();
    void on_check_out_cancel_button_click();
    void on_pay_balance_button_click();
    void on_save_button_click();
    void on_load_button_click();
    void on_exit_click();
    void dialog(Glib::ustring msg);

    // ***For Add***
    void on_add_media_button_click();
    void on_add_transaction_button_click();
    // *Add Customer*
    void on_add_customer_button_click();
    void on_add_customer_ok_button_click();
    void on_add_customer_cancel_button_click();
    // *Add Librarian*
    void on_add_librarian_button_click();
    void on_add_librarian_ok_button_click();
    void on_add_librarian_cancel_button_click();
    void on_add_bundle_button_click();

    // ***For Add Media***
    // *Add Book*
    void on_add_book_button_click();
    void on_add_book_ok_button_click();
    void on_add_book_cancel_button_click();
    // *Add Movie*
    void on_add_movie_button_click();
    void on_add_movie_ok_button_click();
    void on_add_movie_cancel_button_click();
    void on_add_leading_actor_button_click();
    // *Add Video Game*
    void on_add_video_game_button_click();
    void on_add_video_game_ok_button_click();
    void on_add_video_game_cancel_button_click();
    // *Add Music Album*
    void on_add_music_album_button_click();
    void on_add_music_album_ok_button_click();
    void on_add_music_album_cancel_button_click();
    void on_add_track_button_click();
    // *Add Television Show*
    void on_add_television_show_season_button_click();
    void on_add_television_show_season_ok_button_click();
    void on_add_television_show_season_cancel_button_click();
    void on_add_voice_actor_button_click();
    void on_add_composer_button_click();
private:
    Library& library;
    Gtk::Window *window_check_in;
    Gtk::Window *window_check_out;
    Gtk::Window *window_add_customer;
    Gtk::Window *window_add_librarian;
    Gtk::Window *window_add_book;
    Gtk::Window *window_add_movie;
    Gtk::Window *window_add_video_game;
    Gtk::Window *window_add_music_album;
    Gtk::Window *window_add_television_show_season;
    Gtk::Entry *entry_name;
    Gtk::Entry *entry_id;
    Gtk::Entry *entry_phone;
    Gtk::Entry *entry_email;
    Gtk::Entry *entry_balance;
    Gtk::Entry *entry_id_number;
    Gtk::Entry *entry_call_number;
    Gtk::Entry *entry_title;
    Gtk::Entry *entry_genre;
    Gtk::Entry *entry_author;
    Gtk::Entry *entry_copyright_year;
    Gtk::Entry *entry_release_year;
    Gtk::Entry *entry_producer;
    Gtk::Entry *entry_director;
    Gtk::Entry *entry_leading_actor;
    Gtk::Entry *entry_studio;
    Gtk::Entry *entry_artist;
    Gtk::Entry *entry_track;
    Gtk::Entry *entry_voice_actor;
    Gtk::Entry *entry_composer;
    Gtk::Entry *entry_season_number;
    vector<string> leading_actors;
    vector<string> tracks;
    vector<string> voice_actors;
    vector<string> composers;
};

#endif // AND7697_DIALOG_H

#endif // AND7697_DIALOG_H_INCLUDED
