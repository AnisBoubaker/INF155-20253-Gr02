//
// Created by Anis Boubaker on 2025-11-27.
//

#include "mod_garderie.h"

t_garderie* init_garderie(void)
{
    t_garderie* g;

    g = (t_garderie*)malloc(sizeof(t_garderie));
    if(g == NULL)
    {
        return NULL;
    }

    g->liste = (t_animal**)malloc(sizeof(t_animal*)*TAILLE_INCERMENT);
    if(g->liste==NULL)
    {
        free(g);
        return NULL;
    }

    g->nombre_animaux = 0;
    g->taille_max = TAILLE_INCERMENT;

    return g;
}

//Libere l'espace d'une garderie en libérant tous les animaux qu'elle contient
void free_garderie(t_garderie* g)
{
    for(int i=0; i<g->nombre_animaux; i++)
    {
        free_animal(g->liste[i]);
    }
    free(g->liste);
    free(g);
}