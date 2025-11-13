/*
 * #Exercice 1
 * Écrire un programme qui déclare un enregistrement client comportant le numéro
 * du client, son nom et prénom, son adresse (numéro, rue, ville et code postal).
 * Votre programme doit demander la saisie des informations d'un client puis afficher
 * les informations.
 *
 * Les chaines de caractères n'excèderont pas 100 caractères.
 */

#include <stdio.h>
#include <string.h>
#include "mod_client.h"

int main() {

    t_client mon_client;
    t_adresse adresse_mon_client;

    mon_client.adresse = &adresse_mon_client;

    saisir_client(&mon_client);

    // Affichage du client
    afficher_client(&mon_client);

    return 0;
}

