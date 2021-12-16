/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_aj (void)
{
  GtkWidget *aj;
  GtkWidget *fixed7;
  GtkWidget *notebook2;
  GtkWidget *fixed8;
  GtkWidget *radiobutton2;
  GSList *radiobutton2_group = NULL;
  GtkWidget *treeview;
  GtkWidget *label72;
  GtkWidget *button_af;
  GtkWidget *alignment22;
  GtkWidget *hbox18;
  GtkWidget *image21;
  GtkWidget *label89;
  GtkWidget *fixed13;
  GtkWidget *label63;
  GtkWidget *fixed9;
  GtkWidget *label48;
  GtkWidget *mod1;
  GtkWidget *label50;
  GtkWidget *label51;
  GtkWidget *mod4;
  GtkObject *modv_adj;
  GtkWidget *modv;
  GtkWidget *label52;
  GtkWidget *modc;
  GtkWidget *label53;
  GtkWidget *label57;
  GtkWidget *check_id;
  GtkWidget *alignment15;
  GtkWidget *hbox12;
  GtkWidget *image12;
  GtkWidget *label49;
  GtkWidget *button_mod;
  GtkWidget *alignment18;
  GtkWidget *hbox14;
  GtkWidget *image14;
  GtkWidget *label56;
  GtkWidget *mod2;
  GtkWidget *mod3;
  GtkWidget *image16;
  GtkWidget *label37;
  GtkWidget *fixed10;
  GtkWidget *aj1;
  GtkWidget *label66;
  GtkObject *ajv_adj;
  GtkWidget *ajv;
  GtkWidget *label68;
  GtkWidget *aj3;
  GtkWidget *label69;
  GtkWidget *ajc;
  GtkWidget *button7;
  GtkWidget *alignment19;
  GtkWidget *hbox15;
  GtkWidget *image15;
  GtkWidget *label71;
  GtkWidget *label64;
  GtkWidget *label67;
  GtkWidget *aj4;
  GtkWidget *aj5;
  GtkWidget *aj2;
  GtkWidget *aj6;
  GtkWidget *label70;
  GtkWidget *check;
  GtkWidget *image17;
  GtkWidget *label65;
  GtkWidget *fixed11;
  GtkWidget *r1;
  GtkWidget *label59;
  GtkWidget *label73;
  GtkWidget *label74;
  GtkWidget *label79;
  GtkWidget *label80;
  GtkWidget *label77;
  GtkWidget *label78;
  GtkWidget *label75;
  GtkWidget *r2;
  GtkWidget *r3;
  GtkWidget *r4;
  GtkWidget *r5;
  GtkWidget *r6;
  GtkWidget *chercher;
  GtkWidget *alignment20;
  GtkWidget *hbox16;
  GtkWidget *image18;
  GtkWidget *label87;
  GtkWidget *image19;
  GtkWidget *label60;
  GtkWidget *fixed12;
  GtkWidget *treeview_def;
  GtkWidget *button_af_def;
  GtkWidget *alignment21;
  GtkWidget *hbox17;
  GtkWidget *image20;
  GtkWidget *label88;
  GtkWidget *label86;
  GtkWidget *label40;

  aj = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (aj), _("Gestion des capteurs"));

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (aj), fixed7);

  notebook2 = gtk_notebook_new ();
  gtk_widget_show (notebook2);
  gtk_fixed_put (GTK_FIXED (fixed7), notebook2, 0, 0);
  gtk_widget_set_size_request (notebook2, 904, 640);

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (notebook2), fixed8);

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("radiobutton2"));
  gtk_widget_show (radiobutton2);
  gtk_fixed_put (GTK_FIXED (fixed8), radiobutton2, 904, 152);
  gtk_widget_set_size_request (radiobutton2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  treeview = gtk_tree_view_new ();
  gtk_widget_show (treeview);
  gtk_fixed_put (GTK_FIXED (fixed8), treeview, 72, 88);
  gtk_widget_set_size_request (treeview, 744, 328);
  gtk_tree_view_set_rules_hint (GTK_TREE_VIEW (treeview), TRUE);
  gtk_tree_view_set_reorderable (GTK_TREE_VIEW (treeview), TRUE);

  label72 = gtk_label_new (_("<b><span color=\"red\"> Liste des capteurs </span></b>"));
  gtk_widget_show (label72);
  gtk_fixed_put (GTK_FIXED (fixed8), label72, 320, 16);
  gtk_widget_set_size_request (label72, 232, 40);
  gtk_label_set_use_markup (GTK_LABEL (label72), TRUE);

  button_af = gtk_button_new ();
  gtk_widget_show (button_af);
  gtk_fixed_put (GTK_FIXED (fixed8), button_af, 360, 464);
  gtk_widget_set_size_request (button_af, 144, 48);

  alignment22 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment22);
  gtk_container_add (GTK_CONTAINER (button_af), alignment22);

  hbox18 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox18);
  gtk_container_add (GTK_CONTAINER (alignment22), hbox18);

  image21 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image21);
  gtk_box_pack_start (GTK_BOX (hbox18), image21, FALSE, FALSE, 0);

  label89 = gtk_label_new_with_mnemonic (_("Actualiser"));
  gtk_widget_show (label89);
  gtk_box_pack_start (GTK_BOX (hbox18), label89, FALSE, FALSE, 0);

  fixed13 = gtk_fixed_new ();
  gtk_widget_show (fixed13);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 0), fixed13);

  label63 = gtk_label_new (_("<b><span color=\"blue\"> Afficher</span></b>"));
  gtk_widget_show (label63);
  gtk_fixed_put (GTK_FIXED (fixed13), label63, 0, 0);
  gtk_widget_set_size_request (label63, 64, 24);
  gtk_label_set_use_markup (GTK_LABEL (label63), TRUE);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_container_add (GTK_CONTAINER (notebook2), fixed9);

  label48 = gtk_label_new (_("ID :"));
  gtk_widget_show (label48);
  gtk_fixed_put (GTK_FIXED (fixed9), label48, 136, 40);
  gtk_widget_set_size_request (label48, 40, 16);

  mod1 = gtk_entry_new ();
  gtk_widget_show (mod1);
  gtk_fixed_put (GTK_FIXED (fixed9), mod1, 312, 32);
  gtk_widget_set_size_request (mod1, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod1), 8226);

  label50 = gtk_label_new (_("Bloc :"));
  gtk_widget_show (label50);
  gtk_fixed_put (GTK_FIXED (fixed9), label50, 120, 112);
  gtk_widget_set_size_request (label50, 56, 24);

  label51 = gtk_label_new (_("Type :"));
  gtk_widget_show (label51);
  gtk_fixed_put (GTK_FIXED (fixed9), label51, 104, 192);
  gtk_widget_set_size_request (label51, 80, 24);

  mod4 = gtk_entry_new ();
  gtk_widget_show (mod4);
  gtk_fixed_put (GTK_FIXED (fixed9), mod4, 312, 272);
  gtk_widget_set_size_request (mod4, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod4), 8226);

  modv_adj = gtk_adjustment_new (1, -1000, 1000, 1, 10, 10);
  modv = gtk_spin_button_new (GTK_ADJUSTMENT (modv_adj), 1, 0);
  gtk_widget_show (modv);
  gtk_fixed_put (GTK_FIXED (fixed9), modv, 312, 352);
  gtk_widget_set_size_request (modv, 72, 24);

  label52 = gtk_label_new (_("Marque :"));
  gtk_widget_show (label52);
  gtk_fixed_put (GTK_FIXED (fixed9), label52, 104, 280);
  gtk_widget_set_size_request (label52, 64, 16);

  modc = gtk_calendar_new ();
  gtk_widget_show (modc);
  gtk_fixed_put (GTK_FIXED (fixed9), modc, 312, 400);
  gtk_widget_set_size_request (modc, 176, 160);
  gtk_calendar_display_options (GTK_CALENDAR (modc),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  label53 = gtk_label_new (_("Valeur :"));
  gtk_widget_show (label53);
  gtk_fixed_put (GTK_FIXED (fixed9), label53, 104, 352);
  gtk_widget_set_size_request (label53, 72, 24);

  label57 = gtk_label_new (_("Date d'achat :"));
  gtk_widget_show (label57);
  gtk_fixed_put (GTK_FIXED (fixed9), label57, 72, 416);
  gtk_widget_set_size_request (label57, 96, 24);

  check_id = gtk_button_new ();
  gtk_widget_show (check_id);
  gtk_fixed_put (GTK_FIXED (fixed9), check_id, 600, 24);
  gtk_widget_set_size_request (check_id, 104, 48);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (check_id), alignment15);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox12);

  image12 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox12), image12, FALSE, FALSE, 0);

  label49 = gtk_label_new_with_mnemonic (_("V\303\251rifier"));
  gtk_widget_show (label49);
  gtk_box_pack_start (GTK_BOX (hbox12), label49, FALSE, FALSE, 0);

  button_mod = gtk_button_new ();
  gtk_widget_show (button_mod);
  gtk_fixed_put (GTK_FIXED (fixed9), button_mod, 624, 496);
  gtk_widget_set_size_request (button_mod, 120, 48);

  alignment18 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment18);
  gtk_container_add (GTK_CONTAINER (button_mod), alignment18);

  hbox14 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox14);
  gtk_container_add (GTK_CONTAINER (alignment18), hbox14);

  image14 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox14), image14, FALSE, FALSE, 0);

  label56 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label56);
  gtk_box_pack_start (GTK_BOX (hbox14), label56, FALSE, FALSE, 0);

  mod2 = gtk_combo_box_new_text ();
  gtk_widget_show (mod2);
  gtk_fixed_put (GTK_FIXED (fixed9), mod2, 312, 104);
  gtk_widget_set_size_request (mod2, 160, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2), _("A"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2), _("B"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2), _("C"));

  mod3 = gtk_combo_box_new_text ();
  gtk_widget_show (mod3);
  gtk_fixed_put (GTK_FIXED (fixed9), mod3, 312, 184);
  gtk_widget_set_size_request (mod3, 168, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod3), _("Temp\303\251rature"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod3), _("D\303\251bit d'eau"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod3), _("Mouvement"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod3), _("Fum\303\251e"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod3), _("Humidit\303\251"));

  image16 = create_pixmap (aj, "reglage-fins-de-course-pictogramme.jpg");
  gtk_widget_show (image16);
  gtk_fixed_put (GTK_FIXED (fixed9), image16, 416, 8);
  gtk_widget_set_size_request (image16, 544, 520);

  label37 = gtk_label_new (_("<b><span color=\"blue\"> Modifier</span></b>"));
  gtk_widget_show (label37);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 1), label37);
  gtk_label_set_use_markup (GTK_LABEL (label37), TRUE);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_container_add (GTK_CONTAINER (notebook2), fixed10);

  aj1 = gtk_entry_new ();
  gtk_widget_show (aj1);
  gtk_fixed_put (GTK_FIXED (fixed10), aj1, 104, 40);
  gtk_widget_set_size_request (aj1, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj1), 8226);

  label66 = gtk_label_new (_("Type :"));
  gtk_widget_show (label66);
  gtk_fixed_put (GTK_FIXED (fixed10), label66, 0, 104);
  gtk_widget_set_size_request (label66, 112, 24);

  ajv_adj = gtk_adjustment_new (1, -1000, 1000, 1, 10, 10);
  ajv = gtk_spin_button_new (GTK_ADJUSTMENT (ajv_adj), 1, 0);
  gtk_widget_show (ajv);
  gtk_fixed_put (GTK_FIXED (fixed10), ajv, 520, 40);
  gtk_widget_set_size_request (ajv, 72, 24);

  label68 = gtk_label_new (_("Marque :"));
  gtk_widget_show (label68);
  gtk_fixed_put (GTK_FIXED (fixed10), label68, 408, 104);
  gtk_widget_set_size_request (label68, 80, 24);

  aj3 = gtk_entry_new ();
  gtk_widget_show (aj3);
  gtk_fixed_put (GTK_FIXED (fixed10), aj3, 520, 96);
  gtk_widget_set_size_request (aj3, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj3), 8226);

  label69 = gtk_label_new (_("Bloc :"));
  gtk_widget_show (label69);
  gtk_fixed_put (GTK_FIXED (fixed10), label69, 0, 168);
  gtk_widget_set_size_request (label69, 112, 24);

  ajc = gtk_calendar_new ();
  gtk_widget_show (ajc);
  gtk_fixed_put (GTK_FIXED (fixed10), ajc, 192, 216);
  gtk_widget_set_size_request (ajc, 240, 216);
  gtk_calendar_display_options (GTK_CALENDAR (ajc),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed10), button7, 360, 472);
  gtk_widget_set_size_request (button7, 120, 48);

  alignment19 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment19);
  gtk_container_add (GTK_CONTAINER (button7), alignment19);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment19), hbox15);

  image15 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox15), image15, FALSE, FALSE, 0);

  label71 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label71);
  gtk_box_pack_start (GTK_BOX (hbox15), label71, FALSE, FALSE, 0);

  label64 = gtk_label_new (_("ID :"));
  gtk_widget_show (label64);
  gtk_fixed_put (GTK_FIXED (fixed10), label64, 8, 40);
  gtk_widget_set_size_request (label64, 104, 24);

  label67 = gtk_label_new (_("Valeur :"));
  gtk_widget_show (label67);
  gtk_fixed_put (GTK_FIXED (fixed10), label67, 416, 40);
  gtk_widget_set_size_request (label67, 72, 24);

  aj4 = gtk_radio_button_new_with_mnemonic (NULL, _("A"));
  gtk_widget_show (aj4);
  gtk_fixed_put (GTK_FIXED (fixed10), aj4, 144, 168);
  gtk_widget_set_size_request (aj4, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (aj4), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (aj4));

  aj5 = gtk_radio_button_new_with_mnemonic (NULL, _("B"));
  gtk_widget_show (aj5);
  gtk_fixed_put (GTK_FIXED (fixed10), aj5, 328, 168);
  gtk_widget_set_size_request (aj5, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (aj5), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (aj5));

  aj2 = gtk_combo_box_new_text ();
  gtk_widget_show (aj2);
  gtk_fixed_put (GTK_FIXED (fixed10), aj2, 104, 96);
  gtk_widget_set_size_request (aj2, 168, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2), _("Temp\303\251rature"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2), _("D\303\251bit d'eau"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2), _("Mouvement"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2), _("Fum\303\251e"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2), _("Humidit\303\251"));

  aj6 = gtk_radio_button_new_with_mnemonic (NULL, _("C"));
  gtk_widget_show (aj6);
  gtk_fixed_put (GTK_FIXED (fixed10), aj6, 512, 168);
  gtk_widget_set_size_request (aj6, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (aj6), radiobutton2_group);
  radiobutton2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (aj6));

  label70 = gtk_label_new (_("Date :"));
  gtk_widget_show (label70);
  gtk_fixed_put (GTK_FIXED (fixed10), label70, 0, 232);
  gtk_widget_set_size_request (label70, 152, 32);

  check = gtk_check_button_new_with_mnemonic (_("Confirmer"));
  gtk_widget_show (check);
  gtk_fixed_put (GTK_FIXED (fixed10), check, 24, 480);
  gtk_widget_set_size_request (check, 118, 24);

  image17 = create_pixmap (aj, "images.jpeg");
  gtk_widget_show (image17);
  gtk_fixed_put (GTK_FIXED (fixed10), image17, 392, 40);
  gtk_widget_set_size_request (image17, 560, 528);

  label65 = gtk_label_new (_("<b><span color=\"blue\"> Ajouter</span></b>"));
  gtk_widget_show (label65);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 2), label65);
  gtk_widget_set_size_request (label65, 104, 24);
  gtk_label_set_use_markup (GTK_LABEL (label65), TRUE);

  fixed11 = gtk_fixed_new ();
  gtk_widget_show (fixed11);
  gtk_container_add (GTK_CONTAINER (notebook2), fixed11);

  r1 = gtk_entry_new ();
  gtk_widget_show (r1);
  gtk_fixed_put (GTK_FIXED (fixed11), r1, 376, 32);
  gtk_widget_set_size_request (r1, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (r1), 8226);

  label59 = gtk_label_new (_("ID :"));
  gtk_widget_show (label59);
  gtk_fixed_put (GTK_FIXED (fixed11), label59, 248, 32);
  gtk_widget_set_size_request (label59, 104, 24);

  label73 = gtk_label_new (_("Valeur :"));
  gtk_widget_show (label73);
  gtk_fixed_put (GTK_FIXED (fixed11), label73, 416, 40);
  gtk_widget_set_size_request (label73, 72, 24);

  label74 = gtk_label_new (_("Valeur :"));
  gtk_widget_show (label74);
  gtk_fixed_put (GTK_FIXED (fixed11), label74, 416, 40);
  gtk_widget_set_size_request (label74, 72, 24);

  label79 = gtk_label_new (_("Valeur :"));
  gtk_widget_show (label79);
  gtk_fixed_put (GTK_FIXED (fixed11), label79, 112, 128);
  gtk_widget_set_size_request (label79, 64, 24);

  label80 = gtk_label_new (_("Type :"));
  gtk_widget_show (label80);
  gtk_fixed_put (GTK_FIXED (fixed11), label80, 120, 216);
  gtk_widget_set_size_request (label80, 49, 17);

  label77 = gtk_label_new (_("Marque :"));
  gtk_widget_show (label77);
  gtk_fixed_put (GTK_FIXED (fixed11), label77, 96, 296);
  gtk_widget_set_size_request (label77, 72, 24);

  label78 = gtk_label_new (_("Bloc :"));
  gtk_widget_show (label78);
  gtk_fixed_put (GTK_FIXED (fixed11), label78, 120, 384);
  gtk_widget_set_size_request (label78, 49, 17);

  label75 = gtk_label_new (_("Date d'achat :"));
  gtk_widget_show (label75);
  gtk_fixed_put (GTK_FIXED (fixed11), label75, 72, 456);
  gtk_widget_set_size_request (label75, 104, 32);

  r2 = gtk_label_new ("");
  gtk_widget_show (r2);
  gtk_fixed_put (GTK_FIXED (fixed11), r2, 272, 128);
  gtk_widget_set_size_request (r2, 136, 24);

  r3 = gtk_label_new ("");
  gtk_widget_show (r3);
  gtk_fixed_put (GTK_FIXED (fixed11), r3, 280, 216);
  gtk_widget_set_size_request (r3, 128, 24);

  r4 = gtk_label_new ("");
  gtk_widget_show (r4);
  gtk_fixed_put (GTK_FIXED (fixed11), r4, 280, 296);
  gtk_widget_set_size_request (r4, 120, 24);

  r5 = gtk_label_new ("");
  gtk_widget_show (r5);
  gtk_fixed_put (GTK_FIXED (fixed11), r5, 280, 384);
  gtk_widget_set_size_request (r5, 120, 24);

  r6 = gtk_label_new ("");
  gtk_widget_show (r6);
  gtk_fixed_put (GTK_FIXED (fixed11), r6, 280, 456);
  gtk_widget_set_size_request (r6, 112, 24);

  chercher = gtk_button_new ();
  gtk_widget_show (chercher);
  gtk_fixed_put (GTK_FIXED (fixed11), chercher, 584, 24);
  gtk_widget_set_size_request (chercher, 112, 40);

  alignment20 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment20);
  gtk_container_add (GTK_CONTAINER (chercher), alignment20);

  hbox16 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox16);
  gtk_container_add (GTK_CONTAINER (alignment20), hbox16);

  image18 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image18);
  gtk_box_pack_start (GTK_BOX (hbox16), image18, FALSE, FALSE, 0);

  label87 = gtk_label_new_with_mnemonic (_("chercher"));
  gtk_widget_show (label87);
  gtk_box_pack_start (GTK_BOX (hbox16), label87, FALSE, FALSE, 0);

  image19 = create_pixmap (aj, "images.png");
  gtk_widget_show (image19);
  gtk_fixed_put (GTK_FIXED (fixed11), image19, 472, 120);
  gtk_widget_set_size_request (image19, 400, 416);

  label60 = gtk_label_new (_("<b><span color=\"blue\"> Rechercher</span></b>"));
  gtk_widget_show (label60);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 3), label60);
  gtk_widget_set_size_request (label60, 104, 24);
  gtk_label_set_use_markup (GTK_LABEL (label60), TRUE);

  fixed12 = gtk_fixed_new ();
  gtk_widget_show (fixed12);
  gtk_container_add (GTK_CONTAINER (notebook2), fixed12);

  treeview_def = gtk_tree_view_new ();
  gtk_widget_show (treeview_def);
  gtk_fixed_put (GTK_FIXED (fixed12), treeview_def, 72, 88);
  gtk_widget_set_size_request (treeview_def, 744, 328);
  gtk_tree_view_set_rules_hint (GTK_TREE_VIEW (treeview_def), TRUE);
  gtk_tree_view_set_reorderable (GTK_TREE_VIEW (treeview_def), TRUE);

  button_af_def = gtk_button_new ();
  gtk_widget_show (button_af_def);
  gtk_fixed_put (GTK_FIXED (fixed12), button_af_def, 352, 464);
  gtk_widget_set_size_request (button_af_def, 160, 48);

  alignment21 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment21);
  gtk_container_add (GTK_CONTAINER (button_af_def), alignment21);

  hbox17 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox17);
  gtk_container_add (GTK_CONTAINER (alignment21), hbox17);

  image20 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image20);
  gtk_box_pack_start (GTK_BOX (hbox17), image20, FALSE, FALSE, 0);

  label88 = gtk_label_new_with_mnemonic (_(" Actualiser"));
  gtk_widget_show (label88);
  gtk_box_pack_start (GTK_BOX (hbox17), label88, FALSE, FALSE, 0);

  label86 = gtk_label_new (_("<b><span color=\"red\"> Liste des capteurs d\303\251fectueux</span></b>"));
  gtk_widget_show (label86);
  gtk_fixed_put (GTK_FIXED (fixed12), label86, 344, 16);
  gtk_widget_set_size_request (label86, 232, 40);
  gtk_label_set_use_markup (GTK_LABEL (label86), TRUE);

  label40 = gtk_label_new (_("<b><span color=\"blue\"> Diagnostique</span></b>"));
  gtk_widget_show (label40);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook2), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook2), 4), label40);
  gtk_label_set_use_markup (GTK_LABEL (label40), TRUE);

  g_signal_connect ((gpointer) treeview, "row_activated",
                    G_CALLBACK (on_treeview_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button_af, "clicked",
                    G_CALLBACK (on_button_af_clicked),
                    NULL);
  g_signal_connect ((gpointer) check_id, "clicked",
                    G_CALLBACK (on_check_id_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_mod, "clicked",
                    G_CALLBACK (on_button_mod_clicked),
                    NULL);
  g_signal_connect ((gpointer) button7, "clicked",
                    G_CALLBACK (on_button_aj_clicked),
                    NULL);
  g_signal_connect ((gpointer) chercher, "clicked",
                    G_CALLBACK (on_chercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview_def, "row_activated",
                    G_CALLBACK (on_treeview_def_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button_af_def, "clicked",
                    G_CALLBACK (on_button_af_def_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (aj, aj, "aj");
  GLADE_HOOKUP_OBJECT (aj, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (aj, notebook2, "notebook2");
  GLADE_HOOKUP_OBJECT (aj, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (aj, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (aj, treeview, "treeview");
  GLADE_HOOKUP_OBJECT (aj, label72, "label72");
  GLADE_HOOKUP_OBJECT (aj, button_af, "button_af");
  GLADE_HOOKUP_OBJECT (aj, alignment22, "alignment22");
  GLADE_HOOKUP_OBJECT (aj, hbox18, "hbox18");
  GLADE_HOOKUP_OBJECT (aj, image21, "image21");
  GLADE_HOOKUP_OBJECT (aj, label89, "label89");
  GLADE_HOOKUP_OBJECT (aj, fixed13, "fixed13");
  GLADE_HOOKUP_OBJECT (aj, label63, "label63");
  GLADE_HOOKUP_OBJECT (aj, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (aj, label48, "label48");
  GLADE_HOOKUP_OBJECT (aj, mod1, "mod1");
  GLADE_HOOKUP_OBJECT (aj, label50, "label50");
  GLADE_HOOKUP_OBJECT (aj, label51, "label51");
  GLADE_HOOKUP_OBJECT (aj, mod4, "mod4");
  GLADE_HOOKUP_OBJECT (aj, modv, "modv");
  GLADE_HOOKUP_OBJECT (aj, label52, "label52");
  GLADE_HOOKUP_OBJECT (aj, modc, "modc");
  GLADE_HOOKUP_OBJECT (aj, label53, "label53");
  GLADE_HOOKUP_OBJECT (aj, label57, "label57");
  GLADE_HOOKUP_OBJECT (aj, check_id, "check_id");
  GLADE_HOOKUP_OBJECT (aj, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (aj, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (aj, image12, "image12");
  GLADE_HOOKUP_OBJECT (aj, label49, "label49");
  GLADE_HOOKUP_OBJECT (aj, button_mod, "button_mod");
  GLADE_HOOKUP_OBJECT (aj, alignment18, "alignment18");
  GLADE_HOOKUP_OBJECT (aj, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (aj, image14, "image14");
  GLADE_HOOKUP_OBJECT (aj, label56, "label56");
  GLADE_HOOKUP_OBJECT (aj, mod2, "mod2");
  GLADE_HOOKUP_OBJECT (aj, mod3, "mod3");
  GLADE_HOOKUP_OBJECT (aj, image16, "image16");
  GLADE_HOOKUP_OBJECT (aj, label37, "label37");
  GLADE_HOOKUP_OBJECT (aj, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (aj, aj1, "aj1");
  GLADE_HOOKUP_OBJECT (aj, label66, "label66");
  GLADE_HOOKUP_OBJECT (aj, ajv, "ajv");
  GLADE_HOOKUP_OBJECT (aj, label68, "label68");
  GLADE_HOOKUP_OBJECT (aj, aj3, "aj3");
  GLADE_HOOKUP_OBJECT (aj, label69, "label69");
  GLADE_HOOKUP_OBJECT (aj, ajc, "ajc");
  GLADE_HOOKUP_OBJECT (aj, button7, "button7");
  GLADE_HOOKUP_OBJECT (aj, alignment19, "alignment19");
  GLADE_HOOKUP_OBJECT (aj, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (aj, image15, "image15");
  GLADE_HOOKUP_OBJECT (aj, label71, "label71");
  GLADE_HOOKUP_OBJECT (aj, label64, "label64");
  GLADE_HOOKUP_OBJECT (aj, label67, "label67");
  GLADE_HOOKUP_OBJECT (aj, aj4, "aj4");
  GLADE_HOOKUP_OBJECT (aj, aj5, "aj5");
  GLADE_HOOKUP_OBJECT (aj, aj2, "aj2");
  GLADE_HOOKUP_OBJECT (aj, aj6, "aj6");
  GLADE_HOOKUP_OBJECT (aj, label70, "label70");
  GLADE_HOOKUP_OBJECT (aj, check, "check");
  GLADE_HOOKUP_OBJECT (aj, image17, "image17");
  GLADE_HOOKUP_OBJECT (aj, label65, "label65");
  GLADE_HOOKUP_OBJECT (aj, fixed11, "fixed11");
  GLADE_HOOKUP_OBJECT (aj, r1, "r1");
  GLADE_HOOKUP_OBJECT (aj, label59, "label59");
  GLADE_HOOKUP_OBJECT (aj, label73, "label73");
  GLADE_HOOKUP_OBJECT (aj, label74, "label74");
  GLADE_HOOKUP_OBJECT (aj, label79, "label79");
  GLADE_HOOKUP_OBJECT (aj, label80, "label80");
  GLADE_HOOKUP_OBJECT (aj, label77, "label77");
  GLADE_HOOKUP_OBJECT (aj, label78, "label78");
  GLADE_HOOKUP_OBJECT (aj, label75, "label75");
  GLADE_HOOKUP_OBJECT (aj, r2, "r2");
  GLADE_HOOKUP_OBJECT (aj, r3, "r3");
  GLADE_HOOKUP_OBJECT (aj, r4, "r4");
  GLADE_HOOKUP_OBJECT (aj, r5, "r5");
  GLADE_HOOKUP_OBJECT (aj, r6, "r6");
  GLADE_HOOKUP_OBJECT (aj, chercher, "chercher");
  GLADE_HOOKUP_OBJECT (aj, alignment20, "alignment20");
  GLADE_HOOKUP_OBJECT (aj, hbox16, "hbox16");
  GLADE_HOOKUP_OBJECT (aj, image18, "image18");
  GLADE_HOOKUP_OBJECT (aj, label87, "label87");
  GLADE_HOOKUP_OBJECT (aj, image19, "image19");
  GLADE_HOOKUP_OBJECT (aj, label60, "label60");
  GLADE_HOOKUP_OBJECT (aj, fixed12, "fixed12");
  GLADE_HOOKUP_OBJECT (aj, treeview_def, "treeview_def");
  GLADE_HOOKUP_OBJECT (aj, button_af_def, "button_af_def");
  GLADE_HOOKUP_OBJECT (aj, alignment21, "alignment21");
  GLADE_HOOKUP_OBJECT (aj, hbox17, "hbox17");
  GLADE_HOOKUP_OBJECT (aj, image20, "image20");
  GLADE_HOOKUP_OBJECT (aj, label88, "label88");
  GLADE_HOOKUP_OBJECT (aj, label86, "label86");
  GLADE_HOOKUP_OBJECT (aj, label40, "label40");

  return aj;
}

