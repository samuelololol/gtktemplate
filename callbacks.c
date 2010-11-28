#include "callbacks.h"

void window1_destroy_cb(GtkObject *object) 
{
    gtk_main_quit();
}
