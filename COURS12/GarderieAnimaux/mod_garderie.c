//
// Created by Anis Boubaker on 2025-11-27.
//

#include "mod_garderie.h"

//Prototypes des fonctions privées:
static int garderie_chercher_animal(const t_garderie* g, const t_animal* a);

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

int garderie_ajouter_animal(t_garderie* g, const t_animal* a)
{
    if(g->nombre_animaux >= g->taille_max){ //Agrandir le tableau
        t_animal** adresse_tmp;
        adresse_tmp = realloc(g->liste, sizeof(t_animal*)*(g->taille_max+TAILLE_INCERMENT));
        if(adresse_tmp == NULL)
        {
            return 0;
        }
        g->liste = adresse_tmp;
        g->taille_max = g->taille_max + TAILLE_INCERMENT;
    }

    g->liste[ g->nombre_animaux ] = a;
    g->nombre_animaux++;
    return 1;
}

void afficher_garderie(const t_garderie* g){
    for(int i=0; i<g->nombre_animaux; i++){
        afficher_animal(g->liste[i]);
        printf("\n-----------------------------------\n");
    }
}

t_animal* garderie_retirer_animal(t_garderie* g, int indice)
{
    t_animal* animal_retire;
    if(indice<0  || indice > g->nombre_animaux-1)
    {
        return NULL;
    }
    animal_retire = g->liste[indice];
    for(int i=indice; i < g->nombre_animaux - 1; i++)
    {
        g->liste[i] = g->liste[i+1];
    }
    g->nombre_animaux--;

    return animal_retire;
}

static int garderie_chercher_animal(const t_garderie* g, const t_animal* a)
{
    for(int i=0; i<g->nombre_animaux; i++)
    {
        if(g->liste[i] == a){
            return i;
        }
    }
    return -1;
}

t_animal* garderie_retirer_animal_ref(t_garderie* g, const t_animal* a){
    int indice;

    indice = garderie_chercher_animal(g, a);
    if(indice == -1){
        return NULL;
    }

    return garderie_retirer_animal(g, indice);
}
