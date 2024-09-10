#include "header.h"

int AfficherMenuDep() {
    int choix;

    printf("\tLes departements possibles: \n");
    for (int i = 0; i < 12; i++) 
        printf("\t%d. %s\n", i + 1, dep[i]);

    printf("\tEntrez le numéro du département choisi: ");
    scanf("%d", &choix);
    getchar();

    return choix;
}