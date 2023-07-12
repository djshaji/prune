#include "window.h"

Prune * prune_new (GtkApplication *app, Prune * p) {
	p -> window = gtk_application_window_new (app);
	gtk_window_set_title (GTK_WINDOW (p -> window), "Prune");
	gtk_window_set_default_size (GTK_WINDOW (p-> window), 800, 600);
	p-> box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 10) ;
	gtk_window_set_child (p-> window, p->box) ;
	
	p -> 
	
    gtk_window_present (p->window);
	return p ;
}
