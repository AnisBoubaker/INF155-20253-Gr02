#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mod_personne.h"
#include "mod_animal.h"


int main() {
    t_personne* romy;
    t_personne* jon;
    t_animal* a1;
    t_animal* a2;
    t_animal* a3;

    romy = init_personne("Belanger", "Romy", "514-670-7656");
    jon = init_personne("Snow", "Jon", "514-569-6512");

    a1 = init_animal("Choupi", "Chien", "Golden", 2021, 1, 20, romy);
    a2 = init_animal("Ghost", "Loup", "Direwolf", 1980, 10, 30, jon);
    a3 = init_animal("Toutou", "Chat", "Persan", 2015,12, 20, romy);

    afficher_animal(a1);
    printf("-----------------------\n");
    afficher_animal(a2);
    printf("-----------------------\n");
    afficher_animal(a3);
    printf("-----------------------\n");

    free_animal(a1);
    free_animal(a2);
    free_animal(a3);
    free_personne(romy);
    free_personne(jon);

    return 0;
}
