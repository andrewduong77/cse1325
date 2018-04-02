#ifndef __VIEW_H
#define __VIEW_H 201609
 
#include "video_store.h"

class View {
  public:
    View(Video_Store& vs) : video_store(vs) { }
    int select_from_menu();
    void list_medias();
    int select_media();
    void list_patrons();
    int select_patron();
    int select_genre();
    int select_age();
    int select_media_type();
    void help();
  private:
    string get_medias();
    string get_patrons();
    Video_Store& video_store; 
};
#endif
