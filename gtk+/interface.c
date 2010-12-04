#include "interface.h"

GtkWidget* create_window1(char * argv){

    /* load the program user interface from Glade3 by GtkBuilder */
    GError* error = NULL;
    GtkBuilder* builder = gtk_builder_new ();
    if (!gtk_builder_add_from_file (builder, argv, &error))
    {
        g_warning ("Couldn't load builder file: %s", error->message) ;
        g_error_free (error);
    }

    /* Pull out the UI elements build by glade3 */
    GtkWidget* window1;          /* create and connect by glade3 */
    /* create gtkwidget manually, i.e. vte widget*/
    //GtkWidget *vte;             /* add manually */ 


    /* connect to the element on glade3 */
    window1        = GTK_WIDGET(gtk_builder_get_object (builder,"window1"));

    /* i.e. vte creation */
    //vte = vte_terminal_new(); 

    /* i.e. connecting the custom element to glade3 container */
    //gtk_box_pack_start_defaults(GTK_BOX(window1), vte);

    /* connect the signals in the interface */
    /* remember add -export-dynamic when compile and link */
    gtk_builder_connect_signals(builder,NULL);

    return window1;
}
