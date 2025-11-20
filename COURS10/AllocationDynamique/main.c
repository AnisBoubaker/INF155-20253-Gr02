#include <stdio.h>
#include <stdlib.h>

int main() {

    int* entier_dynamique = NULL;

    entier_dynamique = (int*)malloc(sizeof(int));
    *entier_dynamique = 50;
    printf("L'entier contient: %d\n", *entier_dynamique);

    //Libère de l'espace mémoire qui a été alloué de façon dynamique
    //Important de le faire ici, car autrement nous aurions perdu la mémoire
    //allouée à la ligne 8.
    free(entier_dynamique);

    entier_dynamique = (int*)malloc(sizeof(int));
    *entier_dynamique = 100;
    printf("L'entier contient: %d\n", *entier_dynamique);

    return 0;
}
