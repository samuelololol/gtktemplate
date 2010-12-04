#include "main.h"

int main (int argc, char *argv[])
{
  Gtk::Main kit(argc, argv);

  //HelloWorld helloworld;
  ////Shows the window and returns when it is closed.
  //Gtk::Main::run(helloworld);

  Gtk::Window* window;
  window = create_window1("gtkbuilder_saved_by_glade3.glade");
  Gtk::Main::run(*window);

  return 0;
}
