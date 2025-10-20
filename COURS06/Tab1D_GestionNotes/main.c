#include <stdio.h>

#define MAX_ETUDIANTS 60

double moyenne(double tab[], int taille);
double max_tab(double tableau[], int taille);

int main() {
    int nb_etudiants;
    double notes[MAX_ETUDIANTS];

    printf("Combien d'étudiant-e-s? ");
    scanf("%d", &nb_etudiants);
    //Saisir les notes dans le tableau
    for(int i=0; i<nb_etudiants; i++)
    {
        printf("Saisir la note numero %d: ", i);
        scanf("%lf", &notes[i]);
    }
    //Afficher le contenu du tableau
    for(int i=0; i<nb_etudiants; i++)
    {
        printf("%lf, ", notes[i]);
    }
    printf("\n");

    //Calcul de la moyenne
    double la_moyenne = 0;
//    for(int i=0; i< nb_etudiants; i++)
//    {
//        moyenne += notes[i];
//    }
//    moyenne = moyenne / nb_etudiants;

    la_moyenne = moyenne(notes, nb_etudiants);

    printf("La note bmaximale est: %lf\n", max_tab(notes, nb_etudiants) );

    printf("La moyenne des notes: %lf\n", la_moyenne);

    return 0;
}

//IMPORTANT: Lorsqu'on passe un tableau en parametre, on doit obligatoirement
//passer la taille effective du tableau également.
double moyenne(double tab[], int taille)
{
    double somme = 0;

    for(int i=0; i<taille; i++)
    {
        somme += tab[i];
    }

    return somme / taille;
}


double max_tab(double tableau[], int taille)
{
    double max_provisoire = tableau[0];

    for(int i=1; i<taille; i++)
    {
        if(tableau[i] > max_provisoire)
        {
            max_provisoire = tableau[i];
        }
    }
    return max_provisoire;
}
