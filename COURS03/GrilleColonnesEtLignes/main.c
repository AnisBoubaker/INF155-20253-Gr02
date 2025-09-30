#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nb_lignes, nb_colonnes;
    int col, ln;

    printf("Nombre de lignes: ");
    scanf("%d", &nb_lignes);
    printf("Nombre de colonnes: ");
    scanf("%d", &nb_colonnes);

    for(ln = 0; ln < nb_lignes; ln++)
    {
        for (col = 0; col < nb_colonnes; col++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
