#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 1000

int main() {
    double dummy = 3453222433222333.25;
    char phrase[TAILLE_MAX] = {'B','o','n','j','o','u','r',' ','t','o','u','t',' ',
                     'l','e',' ','m','o','n','d','e', '\0'};

    //char c1 = 'a';
    char chaine2[] = "Vendredi c'est la grève!";

    printf("La chaine est: %s\n", phrase);
    printf("La chaine2 est: %s\n", chaine2);

    char chaine_lue[TAILLE_MAX];

//    printf("Saisir votre prenom: ");
//    scanf("%s", chaine_lue); //Notez: pas de &  car chaine_lue
//                            //c'est déja une adresse (pointeur)
//    printf("Le prenom saisi: %s", chaine_lue);


    char prenom[TAILLE_MAX];
    printf("Saisir votre prenom: ");
    fgets(prenom, TAILLE_MAX, stdin);
    prenom[ strlen(prenom)-1 ] = '\0';

    printf("Le prenom saisi avec fgets: %s\n", prenom);

    printf("Le nombre de caracteres du prenom: %d\n", strlen(prenom));


    return 0;
}
