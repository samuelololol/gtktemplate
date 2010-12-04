#include "interface.h"

Gtk::Window* create_window1(char *argv)
{
    Gtk::Window * window1;

    //load the glade file and instiate tis widgets:
    Glib::RefPtr<Gtk::Builder> builder = Gtk::Builder::create();
    try
    {
        builder->add_from_file(argv);
    }
    catch(const Glib::FileError& ex)
    {
        std::cerr << "FileError: " << ex.what() << std::endl;
        return 0;
    }
    catch(const Gtk::BuilderError& ex)
    {
        std::cerr << "BuilderError: " << ex.what() << std::endl;
        return 0;
    }
    builder->get_widget("window1",window1);

    return window1;
}
