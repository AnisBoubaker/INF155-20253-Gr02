#include <stdio.h>
#include <stdlib.h>


/*
 * Calcule la valeur d'une factorielle
 * Entrees:
 * - val (entier): Valeur pour laquelle on veut calculer la factorielle
 * Sortie (double): La valeur de val! (double qui stocke un entier pour aller dans les grands entiers).
 */
double factorielle(int val)
{
    //val est un paramètre. C'est une variable qui est déjà initialisée
    //à une valeur.
    int fact = 1;
    int i;

    for(i=1; i<=val; i++){
        fact = fact * i; //fact *= i
    }

    return fact;
}


int main(void)
{

    int n= 10;
    int k = 3;
    int i;

    int fact_n;
    int fact_k;
    int fact_n_k;
    int resultat;

    fact_n = factorielle(n);
    fact_k = factorielle(k);
    fact_n_k = factorielle(n - k);
    resultat = fact_n / (fact_k * fact_n_k);
    printf("Le nombre de combinaisons de %d elements parmi %d element est: %d", k, n, resultat);








    /*for(int i=1; i<=n; i++){
        fact_n *= i;
    }

    for(int i=1; i<=k; i++){
        fact_k *= i;
    }

    for(int i=1; i<=n-k; i++){
        fact_n_k *= i;
    }

    resultat = fact_n / (fact_k * fact_n_k);
    printf("Le nombre de combinaisons de %d elements parmi %d element est: %d", k, n, resultat);
    */
    return EXIT_SUCCESS;
}
