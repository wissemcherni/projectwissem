#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
typedef struct date
{
    int j;
    int m;
    int a;
}date;


typedef struct capteur
{
    char id[20];
    float val;
    int type;
    char bloc[10];
    char marque[20];
    date d;
}capteur;

void ajouter(capteur u, char *fname);
void supprimer(capteur u, char *fname);
void modifier(capteur u, char *fname);
void afficher(GtkWidget *liste, char *fname);
capteur chercher(char *id, char *fname);
void diagnostic(GtkWidget *liste, char *fname);

