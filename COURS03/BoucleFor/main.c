#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int nb_lignes;
    int compteur;

    printf("Nombre de lignes: ");
    scanf("%d", &nb_lignes);


    for( compteur = 0; compteur < nb_lignes; compteur++)
    {
        printf("#####\n");
    }

//    compteur = 0;  //Initialiser le compteur
//    while(  compteur < nb_lignes  )
//    {
//        printf("#####\n");
//        compteur++; //Incrémenter le compteur
//    }



    return EXIT_SUCCESS;
}
