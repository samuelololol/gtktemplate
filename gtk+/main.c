#include "main.h"


int main(int argc, char *argv[])
{

    gtk_init(&argc, &argv);
    GtkWidget* window1;
    window1 = create_window1("gtkbuilder_saved_by_glade3.glade");
    

    /* show all elements */
    gtk_widget_show_all(window1);

    /* start the  event loop */
    gtk_main();

    return 0;
}
