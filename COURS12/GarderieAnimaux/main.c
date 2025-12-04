#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod_personne.h"
#include "mod_animal.h"
#include "mod_garderie.h"


int main() {
    t_personne* romy;
    t_personne* jon;
    t_animal* a1;
    t_animal* a2;
    t_animal* a3;
    t_garderie* ma_garderie;

    romy = init_personne("Belanger", "Romy", "514-670-7656");
    jon = init_personne("Snow", "Jon", "514-569-6512");

    a1 = init_animal("Choupi", "Chien", "Golden", 2021, 1, 20, romy);
    a2 = init_animal("Ghost", "Loup", "Direwolf", 1980, 10, 30, jon);
    a3 = init_animal("Toutou", "Chat", "Persan", 2015,12, 20, romy);

    ma_garderie = init_garderie();
    garderie_ajouter_animal(ma_garderie, a1);
    garderie_ajouter_animal(ma_garderie, a2);
    garderie_ajouter_animal(ma_garderie, a3);

    afficher_garderie(ma_garderie);


//    printf("\n***********************\n APRES SUPPRESSION\n***********************\n");
//    garderie_retirer_animal(ma_garderie, 2);
//    afficher_garderie(ma_garderie);

    //printf("L'animal a1 se trouve à: %d\n", garderie_chercher_animal(ma_garderie, a1));

    printf("\n***********************\n APRES SUPPRESSION\n***********************\n");
    garderie_retirer_animal_ref(ma_garderie, a3);
    afficher_garderie(ma_garderie);

    printf("L'animal a1 se trouve à: %d\n", garderie_chercher_animal(ma_garderie, a1));

    return 0;
}
