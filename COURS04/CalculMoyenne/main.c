#include <stdio.h>
#include <stdlib.h>

#define POND_TP1 0.15
#define POND_TP2 0.15
#define POND_QUIZ 0.15
#define POND_INTRA 0.15
#define POND_FINAL 0.40

/**** DECLARATIONS DES FONCTIONS ******/
double calculer_moyenne(double tp1, double tp2, double quiz, double intra, double final);

int main(void) {

    printf("Exemple de moyenne: %lf", calculer_moyenne(78, 80.5, 75, 69, 72.5));

    return 0;
}

double calculer_moyenne(double tp1, double tp2, double quiz, double intra, double final)
{
    double moyenne = 0;
    //Création d'une variable constante
    const double pond_tp1 = 0.15;

    moyenne += tp1 * POND_TP1;
    moyenne += tp2 * POND_TP2;
    moyenne += quiz * POND_QUIZ;
    moyenne += intra * POND_INTRA;
    moyenne += final * POND_FINAL;

    return moyenne;
}
