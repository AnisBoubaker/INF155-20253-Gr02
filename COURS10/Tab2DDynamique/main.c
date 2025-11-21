#include <stdio.h>
#include <stdlib.h>

int** creer_tab2d_entiers(int nb_lignes, int nb_colonnes);

int main() {
    int** tab = NULL;

    int nb_lignes, nb_colonnes;

    printf("Combien de lignes? ");
    scanf("%d", &nb_lignes);
    printf("Combien de colonnes? ");
    scanf("%d", &nb_colonnes);

    tab = creer_tab2d_entiers(nb_lignes, nb_colonnes);
    if(tab == NULL)
    {
        printf("Desole, erreur d'allocation de la memoire...");
        exit(10);
    }

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            tab[i][j]= i+j;
        }
    }

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }


    return 0;
}


int** creer_tab2d_entiers(int nb_lignes, int nb_colonnes)
{
    int** tab;
    tab = (int**)malloc(nb_lignes*sizeof(int*));
    if(tab == NULL)
    {
        return NULL;
    }

    for(int i=0; i<nb_lignes; i++)
    {
        tab[i] = (int*)malloc(nb_colonnes * sizeof(int));
        if(tab[i] == NULL)
        {
            for(int j=0; j<i; j++)
            {
                free(tab[j]);
            }
            free(tab);
            return NULL;
        }
    }

    return tab;
}