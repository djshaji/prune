#ifndef WINDOW_H
#define WINDOW_H
#include <gtk/gtk.h>
typedef struct _Prune {
	GtkWindow * window ;
	GtkBox * box ;
	GtkBox * button_box ;
} Prune ;

Prune * prune_new (GtkApplication *app, Prune * p) ;
#endif
