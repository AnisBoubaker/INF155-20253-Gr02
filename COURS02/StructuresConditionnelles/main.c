#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int annee_naissance;
    int age;

    printf("Saisir votre annee de naissance: ");
    scanf("%d", &annee_naissance);

    age = 2025-annee_naissance;

    if(age >= 80)
    {
        printf("Vous etes vieux/vieille\n");
    }
    else if(age >= 18)
    {
        printf("Vous etes majeur-e\n");
    }
    else
    {
        printf("Vous etes mineur-e.\n");
    }

    // DEUXIEME SOLUTION QUI FONCTIONNE
//    if(age >= 80)
//    {
//        printf("Vous etes vieux/vieille\n");
//    }
//    if( age >=18 && age < 80 ) //ATTENTION: Ne pas mettre 18 <= age < 80
//    {
//        printf("Vous etes majeur-e\n");
//    }
//    if( age < 18)
//    {
//        printf("Vous etes mineur-e\n");
//    }


//    PREMIERE SOLUTION VALIDE
//    if(age >= 18)
//    {
//        if(age>=80)
//        {
//            printf("Vous etes vieux/vieille\n");
//        }
//        else
//        {
//            printf("Vous etes majeur-e\n");
//        }
//    }
//    else
//    {
//        printf("Vous etes mineur-e\n");
//    }

//    if(age>=80)
//    {
//        printf("Vous etes vieux/vieille.\n");
//    }
//    if(age >= 18)
//    {
//        printf("Vous etes majeur-e.\n");
//    }
//    else
//    {
//        printf("Vous etes mineur-e\n");
//    }


    printf("Ceci est la fin du programme.\n");
    return EXIT_SUCCESS;
}
