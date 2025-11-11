#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 1000

int main() {

    char ma_chaine[TAILLE_MAX] = "Bonjour";
    //ma_chaine = "Allo!";
//    ma_chaine[0]='A';
//    ma_chaine[1]='l';
//    ma_chaine[2]='l';
//    ma_chaine[3]='o';
//    ma_chaine[4]='\0';

    //La seule façon d'affecter une chaine de caractères à une autre
    strncpy(ma_chaine, "Allo bonjour tout le monde!!", TAILLE_MAX);



    char copie_ma_chaine[TAILLE_MAX];
    printf("Ma chaine contient: %s\n", ma_chaine);

    strcpy(copie_ma_chaine, ma_chaine);

    printf("La copie de ma chaine contient: %s\n", copie_ma_chaine);


    //Concatenation
    char prenom[TAILLE_MAX] = "Jean";
    char nom[TAILLE_MAX] = "Valjean";
    char nom_complet[TAILLE_MAX];

    strcpy(nom_complet, prenom);
    nom_complet[ strlen(nom_complet)+1  ] = '\0';
    nom_complet[ strlen(nom_complet)  ] = ' ';

    int taille_actuelle = strlen(nom_complet);
    for(int i=0; i<=strlen(nom); i++ )
    {
        nom_complet[ taille_actuelle + i ] = nom[i];
    }

    printf("Nom complet: %s\n", nom_complet);

    //Concatenation avec strcat
    char nom_complet2[TAILLE_MAX];

    strcpy(nom_complet2, prenom);
    strcat(nom_complet2, " ");
    strcat(nom_complet2, nom);
    printf("Nom complet2: %s\n", nom_complet2);


    char personne[] = "Marie";
    int age = 25;
    char resultat[TAILLE_MAX];

    sprintf(resultat, "%s a %d ans.", personne, age);

    printf("%s\n", resultat);


    char nom_complet3[TAILLE_MAX];
    sprintf(nom_complet3, "%s %s",prenom, nom);


    //Comparaisons
    char ch1[] = "Allo";
    char ch2[] = "Allo";

    //if(ch1 == ch2) //Faux car on compare des pointeurs!
    if( strcmp(ch1, ch2) == 0 )
    {
        printf("Les chaines sont identiques!\n");
    } else {
        printf("Les chaines sont différentes!\n");
    }




    return 0;
}
