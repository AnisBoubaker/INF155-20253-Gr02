#include <stdio.h>

double valeur_ablsolue(double val);
double min_de_3(double v1, double v2, double v3);

int main() {

    printf("Valeur minimale: %lf\n", min_de_3(35, 2, 18));
    printf("Valeur minimale: %lf\n", min_de_3(30, -40, 50));

    return 0;
}


double valeur_ablsolue(double val){
    if(val<0) {
        return -val;
    }
    return val;
}

double min_de_3(double v1, double v2, double v3)
{
    double min;
    min = v1;

//    if(v1<0){
//        v1 = -v1;
//    }
    v1 = v1<0?-v1:v1;
    v2 = v2<0?-v2:v2;
    v3 = valeur_ablsolue(v3);
    if(v2 < min){
        min = v2;
    }
    if(v3 < min){
        min = v3;
    }

    return min;
}
