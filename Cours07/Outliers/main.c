#include <stdio.h>
#include <math.h>
#define MAX_COLS 10

double moyenne_tab(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes);
double ecart_type_tab(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes);
int outliers(double donnees[][MAX_COLS], int nb_lignes, int nb_colonnes);

void positifs(int tab[], int taille);

int main() {

    double data[10][MAX_COLS] = {
            {25, 25, 27, 32},
            {29, 30, -10, 35},
            {150, 32, 29, 22}
    };

    printf("La moyenne: %.2lf\n", moyenne_tab(data, 3, 4));
    printf("Ecart-type: %.2lf\n", ecart_type_tab(data, 3, 4));
    printf("Nombre de donnees aberrantes: %d\n", outliers(data, 3, 4));


    int mon_tab[MAX_COLS] = {12, -5, 56, 89, -25, 18};
    positifs(mon_tab, 6);

    for(int i=0; i<6; i++)
    {
        printf("%d, ", mon_tab[i]);
    }
    printf("\n");

    printf("La premiere case du tableau: %d\n", mon_tab[0]);
    //On déréférence l'adresse mon_tab
    printf("La premiere case du tableau: %d\n", *mon_tab);


    printf("Case du tableau ayant pour indice 1: %d\n", *(mon_tab+1));
    printf("Case du tableau ayant pour indice 2: %d\n", *(mon_tab+2));

    return 0;
}



void positifs(int tab[], int taille)
{
    for(int i=0; i<taille; i++)
    {
        if(tab[i]<0){
            tab[i] = 0;
        }
    }
}







double ecart_type_tab(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
    double moyenne = moyenne_tab(tab, nb_lignes, nb_colonnes);
    double variance = 0;
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
           variance += pow(tab[i][j]-moyenne, 2);
        }
    }
    variance = variance / (nb_lignes*nb_colonnes);

    return sqrt(variance);
}


double moyenne_tab(const double tab[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
    double somme = 0;

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            somme += tab[i][j];
        }
    }
    return somme / (nb_lignes*nb_colonnes);
}

int outliers(double donnees[][MAX_COLS], int nb_lignes, int nb_colonnes)
{
    double moyenne  = moyenne_tab(donnees, nb_lignes, nb_colonnes);
    double et = ecart_type_tab(donnees, nb_lignes, nb_colonnes);

    double min = moyenne - 3*et;
    double max = moyenne + 3*et;

    int compteur = 0;

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            if(donnees[i][j]<min || donnees[i][j]>max){
                compteur++;
                donnees[i][j] = moyenne;
            }
        }
    }

    return compteur;
}