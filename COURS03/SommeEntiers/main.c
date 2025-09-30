#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int max;
    int somme;
    int compteur;

    printf("Saisir le maximum pour la somme: ");
    scanf("%d", &max);

    somme = 0;
    compteur = 1;
    while(compteur <= max)
    {
        somme = somme + compteur;
        compteur++;
    }

    printf("La somme des termes de 1 à %d est: %d\n", max, somme);


    return EXIT_SUCCESS;
}
