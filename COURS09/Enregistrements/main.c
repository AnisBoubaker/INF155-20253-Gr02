#include <stdio.h>
#include <string.h>

#define MAX_CHAINE 100

typedef struct etudiant
{
    char nom[MAX_CHAINE];
    char prenom[MAX_CHAINE];
    char cperm[15];
    double tp1;
    double tp2;
    double intra;
    double final;
} t_etudiant;

//Alias pour le type struct etudiant: t_etudiant
//typedef struct etudiant t_etudiant;

//Crée un alias pour le type unsigned int
typedef unsigned int intp;


int main() {
    struct etudiant etudiant1;
    t_etudiant etudiant2;
    struct etudiant classe[100]; //Tableau où chaque case contient un étudiant


    intp un_entier_positif;


    classe[4].tp1 = 80;


    etudiant1.tp1 = 85;
    etudiant1.tp2 = 80;
    etudiant1.intra = 76;
    etudiant1.final = 90;
    strcpy(etudiant1.nom, "Marie");
    strcpy(etudiant1.prenom, "Forest");
    strcpy(etudiant1.cperm, "FORM76879867");


    printf("Informations de l'etudiant-e:\n");
    printf("Nom et prenom: %s, %s\n", etudiant1.nom, etudiant1.prenom);
    printf("Code permanent: %s\n", etudiant1.cperm);
    printf("Notes: (TP1)%.2lf, (TP2)%.2lf, (Intra)%.2lf, (Final)%.2lf\n",
           etudiant1.tp1, etudiant1.tp2, etudiant1.intra, etudiant1.final);


    return 0;
}
