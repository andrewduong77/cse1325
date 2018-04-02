#include <gtkmm.h>
#include "controller.h"
#include "video_store.h"

int main(int argc, char *argv[]) {
  Gtk::Main kit(argc, argv);
  Video_Store video_store;
  Controller controller(video_store);
  controller.cli();
}
