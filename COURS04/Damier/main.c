#include <stdio.h>
#include <stdlib.h>

void afficher_damier(int nb_lignes, int nb_colonnes);

int main(void) {
    afficher_damier(5,4);

    return EXIT_SUCCESS;
}


void afficher_damier(int nb_lignes, int nb_colonnes){

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            //if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
            if(  (i+j)%2 == 0  )
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}