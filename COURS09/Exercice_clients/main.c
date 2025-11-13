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

#define MAX_CHAINE 100

typedef struct adresse
{
    int num;
    char rue[MAX_CHAINE];
    char ville[MAX_CHAINE];
    char cpostal[MAX_CHAINE];
} t_adresse;

typedef struct client
{
    int num;
    char nom[MAX_CHAINE];
    char prenom[MAX_CHAINE];
    t_adresse adresse;
} t_client;




int main() {

    t_client mon_client;

    printf("Saisir les informations du client:\n");
    printf("Numero: ");
    scanf("%d", &mon_client.num);
    getchar(); //Pour supprimer le retour à la ligne que scanf a laissé trainer dans le buffer du clavier.

    printf("Nom: ");
    fgets(mon_client.nom, MAX_CHAINE, stdin);
    mon_client.nom[ strlen(mon_client.nom)-1  ] = '\0';

    printf("Prenom: ");
    fgets(mon_client.prenom, MAX_CHAINE, stdin);
    mon_client.prenom[ strlen(mon_client.prenom)-1  ] = '\0';

    printf("Adresse:\n");
    printf("Num: ");
    scanf("%d", &mon_client.adresse.num);
    getchar();

    printf("Rue: ");
    fgets(mon_client.adresse.rue, MAX_CHAINE, stdin);
    mon_client.adresse.rue[ strlen(mon_client.adresse.rue) -1 ] = '\0';

    printf("Ville: ");
    fgets(mon_client.adresse.ville, MAX_CHAINE, stdin);
    mon_client.adresse.ville[ strlen(mon_client.adresse.ville) -1 ] = '\0';

    printf("Code Postal: ");
    fgets(mon_client.adresse.cpostal, MAX_CHAINE, stdin);
    mon_client.adresse.cpostal[ strlen(mon_client.adresse.cpostal) -1 ] = '\0';


    // Affichage du client
    printf("Informations du client numero: %d\n", mon_client.num);
    printf("Nom et prenom: %s %s", mon_client.nom, mon_client.prenom);
    printf("Adresse:\n");
    printf("%d %s, %s %s", mon_client.adresse.num, mon_client.adresse.rue,
           mon_client.adresse.ville, mon_client.adresse.cpostal);


    return 0;
}

