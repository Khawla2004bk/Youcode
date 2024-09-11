#include "header.h"

// Affiche le menu de calcul des moyennes

int AfficherMenuCalcul() {
    int choix;

    printf("Que voulez vous calculer ?\n");
    printf("\t1. La moyenne generale d'un departement\n");
    printf("\t2. La moyenne generale de toute l'universite\n");

    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    getchar();

    return choix;

}