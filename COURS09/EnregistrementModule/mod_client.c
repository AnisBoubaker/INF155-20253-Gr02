//
// Created by Anis Boubaker on 2025-11-13.
//

#include "mod_client.h"

void afficher_client(const t_client* un_client)
{
    printf("Informations du client numero: %d\n", un_client->num);
    printf("Nom et prenom: %s %s\n", un_client->nom, un_client->prenom);
    printf("Adresse:\n");
    printf("%d %s, %s %s", un_client->adresse->num, un_client->adresse->rue,
           un_client->adresse->ville, un_client->adresse->cpostal);
}

void saisir_client(t_client* un_client)
{
    printf("Saisir les informations du client:\n");
    printf("Numero: ");
    scanf("%d", &(*un_client).num);
    getchar(); //Pour supprimer le retour à la ligne que scanf a laissé trainer dans le buffer du clavier.

    printf("Nom: ");
    fgets((*un_client).nom, MAX_CHAINE, stdin);
    (*un_client).nom[ strlen((*un_client).nom)-1  ] = '\0';

    // Note:
    // un_client->prenom est equivalent à (*un_client).prenom
    printf("Prenom: ");
    fgets(un_client->prenom, MAX_CHAINE, stdin);
    un_client->prenom[ strlen(un_client->prenom)-1  ] = '\0';

    printf("Adresse:\n");
    printf("Num: ");
    scanf("%d", &un_client->adresse->num);
    getchar();

    printf("Rue: ");
    fgets(un_client->adresse->rue, MAX_CHAINE, stdin);
    un_client->adresse->rue[ strlen(un_client->adresse->rue) -1 ] = '\0';

    printf("Ville: ");
    fgets(un_client->adresse->ville, MAX_CHAINE, stdin);
    un_client->adresse->ville[ strlen(un_client->adresse->ville) -1 ] = '\0';

    printf("Code Postal: ");
    fgets(un_client->adresse->cpostal, MAX_CHAINE, stdin);
    un_client->adresse->cpostal[ strlen(un_client->adresse->cpostal) -1 ] = '\0';
}