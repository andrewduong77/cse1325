#ifndef __CONTROLLER_H
#define __CONTROLLER_H 201609
 
#include "video_store.h"
#include "view.h"

class Controller {
  public:
    Controller (Video_Store& vs) : video_store(vs), view(View(video_store)) { }
    void cli();
    void execute_cmd(int cmd);
  private:
    Video_Store& video_store; 
    View view;
};
#endif
