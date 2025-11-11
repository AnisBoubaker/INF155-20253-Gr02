#include <stdio.h>

void cacher_caracteres(char phrase[], int taille_phrase, const char a_cacher[],
                       int taille_cacher);
void afficher_tab_char(char tab[], int taille);

int main() {
    //double dummy = 3453222433222333.25;
    char phrase[] = {'B','o','n','j','o','u','r',' ','t','o','u','t',' ',
                     'l','e',' ','m','o','n','d','e'};
    char a_cacher[] = {'o', 'j', 'l', 'n'};

    afficher_tab_char(phrase, 21);
    cacher_caracteres(phrase, 21, a_cacher, 4);
    afficher_tab_char(phrase, 21);

    return 0;
}

void afficher_tab_char(char tab[], int taille){
    for(int i=0; i<taille; i++){
        printf("%c", tab[i]);
    }
    printf("\n");
}

void cacher_caracteres(char phrase[], int taille_phrase, const char a_cacher[],
                       int taille_cacher)
{
    for(int i=0; i<taille_phrase; i++)
    {
        for(int j=0; j<taille_cacher; j++)
        {
            if(phrase[i] == a_cacher[j])
            {
                phrase[i] = '*';
            }
        }
    }
}

