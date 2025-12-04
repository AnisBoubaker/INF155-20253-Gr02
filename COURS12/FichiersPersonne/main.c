#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date{
    int jour;
    int mois;
    int annee;
} t_date;

typedef struct personne{
    char nom[100];
    char prenom[100];
    t_date date_naissance;
} t_personne;

int main() {
    FILE* fichier;
    t_personne jean;

    strcpy(jean.nom, "Valjean");
    strcpy(jean.prenom, "Jean");
    jean.date_naissance.jour = 25;
    jean.date_naissance.mois = 6;
    jean.date_naissance.annee = 1745;

    fichier = fopen("une_personne.txt", "w");
    if(fichier == NULL)
    {
        printf("Erreur d'ouverture!\n");
        exit(1);
    }

    fprintf(fichier, "%s\n%s\n%d %d %d\n",
            jean.nom, jean.prenom,
            jean.date_naissance.jour, jean.date_naissance.mois, jean.date_naissance.annee
            );

    fclose(fichier);


    t_personne copie_jean;

    fichier = fopen("une_personne.txt", "r");
    if(fichier == NULL)
    {
        printf("Erreur d'ouverture.\n");
        exit(1);
    }

    fgets(copie_jean.nom, 100, fichier);
    copie_jean.nom[ strlen(copie_jean.nom)-1 ] = '\0';
    fgets(copie_jean.prenom, 100, fichier);
    copie_jean.prenom[ strlen(copie_jean.prenom)-1 ] = '\0';
    fscanf(fichier, "%d %d %d",
           &copie_jean.date_naissance.jour,
           &copie_jean.date_naissance.mois,
           &copie_jean.date_naissance.annee);
    fclose(fichier);

    printf("Nom: %s, Prenom: %s\nDate de naissance: %d-%d-%d\n",
           copie_jean.nom, copie_jean.prenom,
           copie_jean.date_naissance.jour,
           copie_jean.date_naissance.mois,
           copie_jean.date_naissance.annee);


    return 0;
}
