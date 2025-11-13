//
// Created by Anis Boubaker on 2025-11-13.
//

#ifndef MOD_CLIENT__H
#define MOD_CLIENT__H

//Dépendances du module
#include <stdio.h>
#include <string.h>

#define MAX_CHAINE 100

//Les types de données offerts par le module
typedef struct adresse
{
    int num; //4 octets
    char rue[MAX_CHAINE]; //100 octets
    char ville[MAX_CHAINE]; //100 octets
    char cpostal[MAX_CHAINE]; //100 octets
} t_adresse;

typedef struct client
{
    int num; //4 octets
    char nom[MAX_CHAINE]; //100 octets
    char prenom[MAX_CHAINE]; //100 octets
    t_adresse* adresse;
} t_client;

//Prototypes des fonctionnalités offertes par le module
void afficher_client(const t_client* un_client);
void saisir_client(t_client* un_client);


#endif
