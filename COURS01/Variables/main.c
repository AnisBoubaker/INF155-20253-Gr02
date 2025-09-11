/*
 * Programme qui decrit le fonctionnement des variables
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ma_variable = 10;
    unsigned char nombre_positif = -5;
    double une_variable_reelle;

    char un_caractere = 'z'-'1';
    //char un_caractere = 97;

    printf("Le contenu de ma_variable: %d\n", ma_variable);
    printf("Le nombre positif est: %d\n", nombre_positif);
    printf("La variable caractere contient: %d\n", un_caractere);

    nombre_positif = 100;

    char var1 = 5;
    int var2 = 10000;

    var1 = (char)var2;

    printf("Var1: %d, Var2: %d\n", var1, var2);


    return EXIT_SUCCESS;
}
