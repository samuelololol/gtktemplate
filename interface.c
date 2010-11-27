#include "interface.h"

GtkWidget* create_window1(void){

    /* load the program user interface from Glade3 by GtkBuilder */
    GError* error = NULL;
    GtkBuilder* builder = gtk_builder_new ();
    if (!gtk_builder_add_from_file (builder, "gtkbuilder_saved_by_glade3.glade", &error))
    {
        g_warning ("Couldn't load builder file: %s", error->message) ;
        g_error_free (error);
    }

    /* Pull out the UI elements build by glade3 */
    GtkWidget* window;          /* create and connect by glade3 */

    /* create manually */
    //GtkWidget *vte;             /* add manually */ 

    /* connect to the element on glade3 */
    window        = GTK_WIDGET(gtk_builder_get_object (builder,"window1"));


    /* vte instance creation */
    //vte = vte_terminal_new(); 

    /* connect the custom element to glade3 container */
    //gtk_box_pack_start_defaults(GTK_BOX(window), vte);

    /* connect the signals in the interface */
    //gtk_builder_connect_signals(builder,NULL);

    return window;
}
