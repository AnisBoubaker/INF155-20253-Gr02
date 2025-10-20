
#include "stat2d.h"

double moyenne_tab2d(int tab2d[][5], int nb_lignes, int nb_colonnes)
{
    return (double)somme_tab2d(tab2d, nb_lignes, nb_colonnes) / (nb_lignes*nb_colonnes);
}

int somme_tab2d(int tab2d[][5], int nb_lignes, int nb_colonnes)
{
    int somme = 0;

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            somme += tab2d[i][j];
        }
    }
    return somme;
}



//Identifie le plus petit élément non-nul du tableau
int plus_petit_non_nul(int tab2d[][5], int nb_lignes, int nb_colonnes)
{
    //Probleme: si l'élément à la case 0,0 est nul, la fonction ne retournera
    //pas le bon résultat. Exercice: Corrigez ceci.
    int min = tab2d[0][0];
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            if(tab2d[i][j]<min && tab2d[i][j]!=0)
            {
                min = tab2d[i][j];
            }
        }
    }
    return min;
}

void affiocher_tab2d(int tab2d[][5], int nb_lignes, int nb_colonnes)
{
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%d ", tab2d[i][j]);
        }
        printf("\n");
    }
}