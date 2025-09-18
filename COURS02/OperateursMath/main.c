#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    double resultat;

    a = 10;
    b = 3;
    resultat = a / b;
    //Conversion de la variable a en double pour effectuer
    //une division réelle
    //resultat = (double)a / b;

    printf("Le resultat est: %lf\n", resultat);


    int c;
    int d;

    c = 27;
    d = 7;
    resultat = c % d;

    printf("Le resultat est: %lf\n", resultat);


    int x, y;

    x = 11;
    y = x++ - 2;
    printf("La variable y contient: %d\n", y);
    printf("La variable x contient: %d\n", x);


    x =52;
    y = (10*2)<x + 25;
    printf("La variable y contient: %d\n", y);


    return EXIT_SUCCESS;
}
