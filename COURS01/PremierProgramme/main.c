/*
 * Programme qui calcule le salaire d'un-e employé-e
 * Autheur: Anis Boubaker
 * Date: 2025-09-04
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
 //Déclaration des variables
 int nb_heures; //Variable pour stocker le nombre d`heures
 double taux_horaire; //Stocke le taux horaire
 double salaire; //Stocke le salaire calculé

 //Saisie du nombre d'heures
 printf("Nombre d'heures travaillees: ");
 scanf("%d", &nb_heures);

 //Saisie du taux horaire
 printf("Taux horaire: ");
 scanf("%lf", &taux_horaire);

 salaire = nb_heures * taux_horaire;

 printf("Votre salaire est: %.2lf\n", salaire);

 return EXIT_SUCCESS;
}