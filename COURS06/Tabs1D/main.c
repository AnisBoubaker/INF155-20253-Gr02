#include <stdio.h>

#define NOMBRE_ETUDIANTS 20

int main() {

    double notes[NOMBRE_ETUDIANTS]; //Les cases contiennent des valeurs indéfinies

    //Le premieres cases reçoivent la valeur spécifiée
    //Le reste des cases va contenir automatiquement de 0
    double notes2[NOMBRE_ETUDIANTS] = {75, 80.5, 92, 100};

    int tab_plein_de_zeros[100] = {0};

    printf("La valeur à la case ayant pour indice 1 est: %lf\n", notes2[1] );

    notes2[10] = 75;

    //Affichage du tableau de notes:
    for(int i=0; i<NOMBRE_ETUDIANTS; i++)
    {
        printf("%lf\n", notes2[i]);
    }


    return 0;
}
