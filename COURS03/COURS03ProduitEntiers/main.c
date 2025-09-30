#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int max;
    double produit;
    int compteur;
    /*
     * Modifier le programme pour que l'utilisateur soit obligé de saisir une
     * valeur entre 1 et 30.
     */
    do{
        printf("Saisir le max pour le produit (entre 1 et 30): ");
        scanf("%d", &max);
    } while(max<1 || max>30) ;

//    max = 0;
//    while( max<1 || max>30 )
//    {
//        printf("Saisir le max pour le produit (entre 1 et 30): ");
//        scanf("%d", &max);
//    }

    produit = 1;
    compteur = 1;
    while(compteur <= max)
    {
        produit = produit * compteur;
        compteur++;
    }

    printf("Le produit des termes de 1 à %d est: %.0lf\n", max, produit);

    return EXIT_SUCCESS;
}
