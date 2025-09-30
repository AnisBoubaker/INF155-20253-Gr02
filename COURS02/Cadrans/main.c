#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double x, y;
    int cadran = 0;

    printf("Abscisse (x): ");
    scanf("%lf", &x);
    printf("Ordonnee (y): ");
    scanf("%lf", &y);

    if(x==0 || y==0)
    {
        printf("Vous etes sur un axe.\n");
    }
    else if(x>0 && y>0)
    {
        cadran = 1;
    }else if(x>0 && y<0)
    {
        cadran = 2;
    }else if(x<0 && y<0)
    {
        cadran = 3;
    }
    else
    {
        cadran = 4;
    }

    if(cadran)
    {
        printf("Vous etes sur le cadran %d\n", cadran);
    }


    return 0;
}
