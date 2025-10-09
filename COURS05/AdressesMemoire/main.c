#include <stdio.h>

int main() {
    int* ptr_var_entiere;
    double* ptr_var_reelle;
    int var_entiere = 10;
    double var_reelle= 30.5;

    int** ptr_bizarre;

    ptr_var_entiere = &var_entiere;
    ptr_var_reelle = &var_reelle;

    printf("Contenu de variable entiere: %d\n", var_entiere);
    printf("Adresse de la variable entiere: %p\n", &var_entiere);

    printf("Contenu de variable reelle: %lf\n", var_reelle);
    printf("Adresse de la variable entiere: %p\n", &var_reelle);


    *ptr_var_entiere = 100;

    printf("Le contenu de var_entiere: %d\n", var_entiere);
    printf("Le contenu à l'adresse ptr_var_relle: %lf\n", *ptr_var_reelle);

    ptr_bizarre = &ptr_var_entiere;

    **ptr_bizarre = 150;

    printf("Le contenu de var_entiere: %d\n", var_entiere);

    return 0;
}
