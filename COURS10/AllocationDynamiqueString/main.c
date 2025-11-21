#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Pour utiliser l'espace efficacement, on peut:
 * 1. Reallouer l'espace après la saisie
 * 2. Passer une chaine de caracteres temporaire
 */
int main() {

    char* nom;
    char* prenom;
    char* buffer;

    buffer = (char*)malloc(100*sizeof(char));

//    nom = (char*)malloc(100*sizeof(char));
//    prenom = (char*)malloc(100*sizeof(char));
    if(buffer == NULL)
    {
        exit(10);
    }

    printf("Saisir votre nom: ");
    fgets(buffer, 100, stdin);
    buffer[ strlen(buffer)-1 ]='\0';
    //Allocation du nom
    nom = (char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(nom, buffer);

    printf("Saisir votre prenom: ");
    fgets(buffer, 100, stdin);
    buffer[ strlen(buffer)-1 ]='\0';
    //Allocation du prenom
    prenom = (char*)malloc((strlen(buffer)+1)*sizeof(char));
    strcpy(prenom, buffer);

    //On libere le buffer car les saisies sont terminée
    free(buffer);

    printf("Votre nom: %s %s\n", prenom, nom);


    return 0;
}
