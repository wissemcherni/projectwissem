#include <gtk/gtk.h>



void
on_button_mod_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_check_id_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_af_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_aj_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview_row_activated              (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);



void
on_chercher_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview_def_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button_af_def_clicked               (GtkButton       *button,
                                        gpointer         user_data);
