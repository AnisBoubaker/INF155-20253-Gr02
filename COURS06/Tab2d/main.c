#include <stdio.h>
#include "stat2d.h"

int main() {

    int tab[4][5] = { {10, 5, 2}, {23, 3, 8, 7}, {12} , {23, 8}  };
    int tab2[10][15] = { {0} }; //Remplit mon tableau de 0
    // int tab2[10][15] = { 0 }; //Cette syntaxe est aussi permise pour remplir le tableau de 0

    for(int ligne = 0; ligne<4; ligne++)
    {
        for(int i=0; i<5; i++)
        {
            printf("%d ", tab[ligne][i]);
        }
        printf("\n");
    }

//    int somme = 0;
//
//    for(int i=0; i<4; i++)
//    {
//        for(int j=0; j<5; j++)
//        {
//            somme += tab[i][j];
//        }
//    }

    printf("La somme des elements du tableau: %d\n", somme_tab2d(tab, 4, 5));
    printf("La moyenne des elements du tableau: %lf\n", moyenne_tab2d(tab,4,5));
    printf("Le plus petit élément vaut: %d\n", plus_petit_non_nul(tab, 4, 5));
    return 0;
}


