#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille;

    printf("Taille de la grille (5 ou 8): ");
    scanf("%d", &taille);

    if(taille == 5){
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
    } else if ( taille == 8)
    {
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
        printf("#####\n");
    }

    return EXIT_SUCCESS;
}
