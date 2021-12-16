#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "capteur.h"


void
on_button_mod_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *mod1, *mod2, *mod3, *pInfo, *mod4, *modv, *modc;
guint day, month, year;
capteur u;
mod1=lookup_widget(objet,"mod1");
mod2=lookup_widget(objet,"mod2");
mod3=lookup_widget(objet,"mod3");
mod4=lookup_widget(objet,"mod4");
modv=lookup_widget(objet,"modv");
modc=lookup_widget(objet,"modc");
strcpy(u.id,gtk_entry_get_text(GTK_ENTRY(mod1)));
u.type=gtk_combo_box_get_active(GTK_COMBO_BOX(mod3));
strcpy(u.marque,gtk_entry_get_text(GTK_ENTRY(mod4)));
strcpy(u.bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(mod2)));
u.val=gtk_spin_button_get_value(GTK_SPIN_BUTTON(modv));
gtk_calendar_get_date(GTK_CALENDAR(modc),&year,&month,&day);
u.d.j=day;
u.d.m=month+1;
u.d.a=year;
modifier(u,"capteurs.txt");
}


void
on_check_id_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *mod1, *mod2, *mod3, *pInfo, *mod4, *modv, *modc;
int a=0;
char id[50];
FILE *f;
mod1=lookup_widget(objet,"mod1");
mod2=lookup_widget(objet,"mod2");
mod3=lookup_widget(objet,"mod3");
mod4=lookup_widget(objet,"mod4");
modv=lookup_widget(objet,"modv");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(mod1)));
capteur p = chercher(id,"capteurs.txt");
if(strcmp(p.id,"")!=0){
gtk_combo_box_set_active(GTK_COMBO_BOX(mod3),p.type);
gtk_entry_set_text(GTK_ENTRY(mod4),p.marque);
gtk_combo_box_set_active(GTK_COMBO_BOX(mod2),strcmp(p.bloc,"A")==0?0:strcmp(p.bloc,"B")==0?1:2);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(modv),p.val);
}
else{
pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Capteur introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
}
}


void
on_button_af_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview, *treeviewx, *af;
af=lookup_widget(objet,"aj");
gtk_widget_destroy(af);
af=create_aj();
gtk_widget_show(af);
treeview=lookup_widget(af,"treeview");
afficher(treeview,"capteurs.txt");
treeviewx=lookup_widget(af,"treeview_def");
diagnostic(treeviewx,"capteurs.txt");
}


void
on_button_aj_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *aj1, *aj2, *aj3, *a, *b, *c, *ajv, *check, *pInfo;
GtkCalendar *ajc;
capteur u;
guint day, month, year;
aj1=lookup_widget(objet,"aj1");
aj2=lookup_widget(objet,"aj2");
aj3=lookup_widget(objet,"aj3");
ajv=lookup_widget(objet,"ajv");
ajc=lookup_widget(objet,"ajc");
a=lookup_widget(objet,"aj4");
b=lookup_widget(objet,"aj5");
c=lookup_widget(objet,"aj6");
check=lookup_widget(objet,"check");
strcpy(u.id,gtk_entry_get_text(GTK_ENTRY(aj1)));
u.type=gtk_combo_box_get_active(GTK_COMBO_BOX(aj2));
strcpy(u.bloc,gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(a))?"A":gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b))?"B":"C");
strcpy(u.marque,gtk_entry_get_text(GTK_ENTRY(aj3)));
u.val=gtk_spin_button_get_value(GTK_SPIN_BUTTON(ajv));
gtk_calendar_get_date(GTK_CALENDAR(ajc), &year, &month, &day);
u.d.j=day;
u.d.m=month+1;
u.d.a=year;
if(gtk_toggle_button_get_active(GTK_CHECK_BUTTON(check)))
ajouter(u,"capteurs.txt");
else{
pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Confirmation requise");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
}
}


void
on_treeview_row_activated              (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar *id;
	capteur u;
	GtkWidget *pInfo, *af, *objet;
	GtkTreeModel *model=gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path)){
	gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,-1);
	strcpy(u.id,id);
	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_QUESTION,GTK_BUTTONS_YES_NO,"Voulez-vous vraiment\nsupprimer ce capteur?");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_YES:
	gtk_widget_destroy(pInfo);	
	supprimer(u,"capteurs.txt");
	afficher(treeview,"capteurs.txt");
	break;
	case GTK_RESPONSE_NO:
	gtk_widget_destroy(pInfo);
	break;
}	
}
}





void
on_chercher_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *r1, *r2, *r3, *r4, *r5, *r6, *pInfo;
int a=0;
char id[50], val[10], type[20], date[20];
r1=lookup_widget(button,"r1");
r2=lookup_widget(button,"r2");
r3=lookup_widget(button,"r3");
r4=lookup_widget(button,"r4");
r5=lookup_widget(button,"r5");
r6=lookup_widget(button,"r6");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(r1)));
capteur p = chercher(id,"capteurs.txt");
if(strcmp(p.id,"")!=0){
sprintf(val,"%.2f",p.val);
gtk_label_set_text(GTK_LABEL(r2),val);
sprintf(type,p.type==0?"Température":p.type==1?"Débit d'eau":p.type==2?"Mouvement":p.type==3?"Fumée":"Humidité");
gtk_label_set_text(GTK_LABEL(r3),type);
gtk_label_set_text(GTK_LABEL(r4),p.marque);
gtk_label_set_text(GTK_LABEL(r5),p.bloc);
sprintf(date,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
gtk_label_set_text(GTK_LABEL(r6),date);
}
else{
pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Capteur introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
}
}

void
on_treeview_def_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar *id;
	capteur u;
	GtkWidget *pInfo, *af, *objet;
	GtkTreeModel *model=gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path)){
	gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,-1);
	strcpy(u.id,id);
	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_QUESTION,GTK_BUTTONS_YES_NO,"Voulez-vous vraiment\nsupprimer ce capteur?");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_YES:
	gtk_widget_destroy(pInfo);	
	supprimer(u,"capteurs.txt");
	afficher(treeview,"capteurs.txt");
	break;
	case GTK_RESPONSE_NO:
	gtk_widget_destroy(pInfo);
	break;
}	
}
}

void
on_button_af_def_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview, *treeviewx, *def;
def=lookup_widget(button,"aj");
gtk_widget_destroy(def);
def=create_aj();
gtk_widget_show(def);
treeview=lookup_widget(def,"treeview_def");
diagnostic(treeview,"capteurs.txt");
treeviewx=lookup_widget(def,"treeview");
afficher(treeview,"capteurs.txt");
}
