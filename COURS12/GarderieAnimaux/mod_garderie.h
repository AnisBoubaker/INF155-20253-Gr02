//
// Created by Anis Boubaker on 2025-11-27.
//

#ifndef GARDERIEANIMAUX_MOD_GARDERIE_H
#define GARDERIEANIMAUX_MOD_GARDERIE_H

#include "mod_animal.h"

#define TAILLE_INCERMENT 10

typedef struct garderie{
    t_animal** liste; //Tableau dynamique 1D de t_animal*
    int nombre_animaux; //taille effective de la liste
    int taille_max;
} t_garderie;

t_garderie* init_garderie(void);

int garderie_ajouter_animal(t_garderie* g, const t_animal* a);
void afficher_garderie(const t_garderie* g);

t_animal* garderie_retirer_animal(t_garderie* g, int indice);

t_animal* garderie_retirer_animal_ref(t_garderie* g, const t_animal* a);

#endif //GARDERIEANIMAUX_MOD_GARDERIE_H
