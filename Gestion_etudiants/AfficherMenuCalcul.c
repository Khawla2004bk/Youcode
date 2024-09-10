#include "header.h"

int AfficherMenuCalcul() {
    int choix;

    printf("Que voulez vous calculer ?\n");
    printf("\t1. La moyenne generale d'un departement\n");
    printf("\t2. La moyenne generale de toute l'universite\n");

    scanf("%d", &choix);
    getchar();

    return choix;

}