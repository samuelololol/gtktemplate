#include "main.h"


int main(int argc, char *argv[])
{

    gtk_init(&argc, &argv);
    GtkWidget* window;
    window = create_window1();
    

    /* show all elements */
    gtk_widget_show_all(window);

    /* start the  event loop */
    gtk_main();

    return 0;
}
