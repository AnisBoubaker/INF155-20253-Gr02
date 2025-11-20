#include <stdio.h>
#include <stdlib.h>

int main() {

    int* tab = NULL;
    int taille;

    printf("Quelle taille pour le tableau? ");
    scanf("%d", &taille);

    tab = (int*)malloc(taille*sizeof(int));
    if(tab == NULL)
    {
        printf("Desole, plus me mémoire...\n");
        exit(10);
    }

    tab[50] = 1000;
    *(tab+0) = 10;
    *(tab+1) = 20;
    *(tab+2) = 30;

    printf("Valeur a *tab: %d\n", *(tab+0));
    printf("Valeur a *(tab+1): %d\n", *(tab+1));
    printf("Valeur a *(tab+2): %d\n", *(tab+2));

    printf("Valeur à tab[0]: %d\n", tab[0]);
    printf("Valeur à tab[1]: %d\n", tab[1]);
    printf("Valeur à tab[2]: %d\n", tab[2]);


    printf("Quelle est la nouvelle taille pour le tableau? ");
    scanf("%d", &taille);

    //On réalloue l'espace à la nouvelle taille
    int* ptr_tmp;
    ptr_tmp = realloc(tab, taille*sizeof(int));
    if(ptr_tmp == NULL)
    {
        printf("Desole, pas possible de changer la taille pour cette valeur...");
    } else {
        tab = ptr_tmp;
    }

    return 0;
}
