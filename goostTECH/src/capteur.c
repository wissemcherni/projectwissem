#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "capteur.h"
#include "callbacks.h"
#include <gtk/gtk.h>

enum
{
	ID,
	TYPE,
	BLOC,
	MARQUE,
	DATE,
	VALEUR,
	COLUMNS
};


void ajouter(capteur u, char *fname){
GtkWidget *pQuestion, *pInfo, *info;
char str[100];
FILE *f;
int b=0, nb;
gpointer user_data;
capteur p;
f=fopen(fname,"a+");
if(f!=NULL)
{	while(fscanf(f,"%s %f %d %s %s %d %d %d\n",p.id,&(p.val),&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF)
	{	
		if(strcmp(u.id,p.id)==0)
		b=1;
	}
	if(b==0){
	fprintf(f,"%s %.2f %d %s %s %d %d %d\n",u.id,u.val,u.type,u.bloc,u.marque,u.d.j,u.d.m,u.d.a);
	nb = system("./abc");
	sprintf(str,nb==0?"Email envoyé avec succès":"Une erreur est survenue : Veuillez réessayer\n Code erreur : %d",nb);
	info=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,str);
	switch(gtk_dialog_run(GTK_DIALOG(info)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(info);
	break;
	}
	}
	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,b==0?GTK_MESSAGE_INFO:GTK_MESSAGE_WARNING,GTK_BUTTONS_OK,b==0?"Données  ajoutées avec succès":"Données déja existantes !");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
	fclose(f);
}
}

void modifier(capteur u, char *fname){
capteur p;
GtkWidget *pInfo;
gpointer user_data;
FILE *f, *g;
f=fopen(fname,"r");
g=fopen("dump.txt","w");
if(f==NULL||g==NULL)
{
	return;
}
else{
	while(fscanf(f,"%s %f %d %s %s %d %d %d\n",p.id,&(p.val),&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF)
	{
		if(strcmp(p.id,u.id)!=0)
			fprintf(g,"%s %.2f %d %s %s %d %d %d\n",p.id,p.val,p.type,p.bloc,p.marque,p.d.j,p.d.m,p.d.a);
		else
			fprintf(g,"%s %.2f %d %s %s %d %d %d\n",p.id,u.val,u.type,u.bloc,u.marque,u.d.j,u.d.m,u.d.a);
	}
	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"Capteur modifié avec succès !");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
	fclose(f);
	fclose(g);
remove(fname);
rename("dump.txt",fname);
}
}

void afficher(GtkWidget *liste, char *fname)
{
capteur p;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
gchar date[50], type[20], val[10];
FILE *f;


store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID", renderer,"text",ID, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Type", renderer,"text",TYPE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Bloc", renderer,"text",BLOC, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Marque", renderer,"text",MARQUE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_resizable(column,TRUE);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Date", renderer,"text",DATE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Valeur", renderer,"text",VALEUR, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);



store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
f=fopen(fname,"r");
if(f!=NULL)

{
		while(fscanf(f,"%s %f %d %s %s %d %d %d\n",p.id,&(p.val),&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF)
	{
sprintf(val,"%.2f",p.val);
sprintf(date,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
sprintf(type,p.type==0?"Température":p.type==1?"Débit d'eau":p.type==2?"Mouvement":p.type==3?"Fumée":"Humidité");
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ID,p.id,TYPE,type,BLOC,p.bloc,MARQUE,p.marque,DATE,date,VALEUR,val,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
gtk_tree_view_set_enable_search(GTK_TREE_VIEW(liste),TRUE);
}

void supprimer(capteur u, char *fname)
{
capteur p;
int a=0;
GtkWidget *pInfo;
gpointer user_data;
FILE *f, *g;
f=fopen(fname,"r");
g=fopen("dump.txt","w");
if(f!=NULL&&g!=NULL){
	while(fscanf(f,"%s %f %d %s %s %d %d %d\n",p.id,&(p.val),&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF)
	{
		if(strcmp(p.id,u.id)!=0)
			fprintf(g,"%s %.2f %d %s %s %d %d %d\n",p.id,p.val,p.type,p.bloc,p.marque,p.d.j,p.d.m,p.d.a);
		else
			a=1;
	}
	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,a==1?"Capteur supprimé avec succès":"Capteur introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
	fclose(f);
	fclose(g);
remove(fname);
rename("dump.txt",fname);
}
}

void diagnostic(GtkWidget *liste, char *fname)
{
capteur p;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
gchar date[50], type[20], val[10];
FILE *f;


store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID", renderer,"text",ID, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Type", renderer,"text",TYPE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Bloc", renderer,"text",BLOC, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Marque", renderer,"text",MARQUE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_resizable(column,TRUE);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Date", renderer,"text",DATE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Valeur", renderer,"text",VALEUR, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);



store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
f=fopen(fname,"r");
if(f!=NULL)

{
		while(fscanf(f,"%s %f %d %s %s %d %d %d\n",p.id,&(p.val),&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF)
	{
if((p.type==0||p.type==4)&&(p.val<10||p.val>30)){
sprintf(val,"%.2f",p.val);
sprintf(date,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
sprintf(type,p.type==0?"Température":p.type==1?"Débit d'eau":p.type==2?"Mouvement":p.type==3?"Fumée":"Humidité");
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ID,p.id,TYPE,type,BLOC,p.bloc,MARQUE,p.marque,DATE,date,VALEUR,val,-1);
	}
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
gtk_tree_view_set_enable_search(GTK_TREE_VIEW(liste),TRUE);
}

capteur chercher(char *id, char *fname){
capteur p, e;
FILE *f = fopen(fname,"r");
if(f){
while(fscanf(f,"%s %f %d %s %s %d %d %d\n",p.id,&(p.val),&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF){
if(strcmp(p.id,id)==0)
return p;
}
fclose(f);
}
strcpy(e.id,"");
return e;
}
