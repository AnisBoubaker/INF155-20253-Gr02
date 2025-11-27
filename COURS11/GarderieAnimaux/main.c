#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod_personne.h"

typedef struct date{
    int jour;
    int mois;
    int annee;
} t_date;

typedef struct animal{
    char* nom;
    char espece[100];
    char race[100];
    t_date date_naiss;
    t_personne* proprietaire;
} t_animal;


int main() {
    t_personne* romy;

    romy = init_personne("Belanger", "Romy", "514-670-7656");

    afficher_personne(romy);

    free_personne(romy);


    return 0;
}
