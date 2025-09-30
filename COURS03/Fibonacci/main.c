#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int terme_voulu;
    int compteur;
    int fibo_n, fibo_n_1, fibo_n_2;

    printf("Saisir le terme de Fibonacci voulu: ");
    scanf("%d", &terme_voulu);

    fibo_n = 1; //Utile pour le cas où terme_voulu <2
    fibo_n_1 = 1;
    fibo_n_2 = 1;
    for(compteur = 2; compteur <= terme_voulu ; compteur++)
    {
        fibo_n = fibo_n_2 + fibo_n_1;
        fibo_n_2 = fibo_n_1;
        fibo_n_1 = fibo_n;
    }

    printf("Le %d ieme terme de Fibobnacci est: %d\n", terme_voulu, fibo_n);

    return EXIT_SUCCESS;
}
