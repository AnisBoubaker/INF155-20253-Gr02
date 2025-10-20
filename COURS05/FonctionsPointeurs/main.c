#include <stdio.h>

void min_max_de_3(int v1, int v2, int v3, int* adr_min, int* adr_max);

int main() {

    int a = 10;
    int b = 5;
    int c = 7;
    //On crée deux variables où on souhaite que la fonction aille
    //poser les résultats
    int le_min, le_max;

    //On appelle
    min_max_de_3(a, b, c, &le_min, &le_max);

    printf("Le min: %d, le max: %d\n", le_min, le_max);

    return 0;
}


void min_max_de_3(int v1, int v2, int v3, int* adr_min, int* adr_max)
{
    int min, max;

    min = v1;
    if(v2<min){
        min = v2;
    }
    if(v3<min){
        min = v3;
    }

    max = v1;
    if(v2 > max){
        max = v2;
    }
    if(v3 > max){
        max = v3;
    }

    *adr_min = min;
    *adr_max = max;
}
