#include <gtkmm.h>
#include "controller.h"
#include "video_store.h"
#include "main_window.h"
#include <gtkmm.h>

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create(argc, argv, "edu.uta.cse1325.vts");
  Video_Store video_store;
  Controller controller(video_store);
  Main_window win(controller);
  win.set_title("Video Store Management System");
  return app->run(win);
}
