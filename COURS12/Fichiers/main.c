#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* mon_fichier;
    char lecture[1000];

    mon_fichier = fopen("mon_fichier.txt", "r");
    if(mon_fichier==NULL)
    {
        printf("Erreur d'ouverture du fichier.\n");
        exit(0);
    }


    while( fgets(lecture, 1000, mon_fichier) )
    {
        printf("%s", lecture);
    }


    fclose(mon_fichier);


    FILE* data = NULL;
    int ent1, ent2;
    double reel;

    data = fopen("data.txt", "r");
    if(data == NULL)
    {
        printf("Impossible d'ouvrir data.txt\n");
        exit(1);
    }

    fscanf(data, "%d %d %lf", &ent1, &ent2, &reel);
    printf("Entier1: %d, Entier2: %d, Reel: %lf\n", ent1, ent2, reel);


    fclose(data);


    FILE* personne;
    char nom[50];
    char prenom[50];
    strcpy(nom, "Marie");
    strcpy(prenom, "Laflamme");
    int jour=10,mois=5, annee=2005;

    personne = fopen("une_personne.txt", "w");
    if(personne==NULL)
    {
        printf("Erreur d'ouverture.\n");
        exit(1);
    }

    fprintf(personne, "Je m'appelle %s %s,\nje suis né-e le %d-%d-%d\n",
            prenom, nom, jour, mois, annee);

    fclose(personne);

    return 0;
}
