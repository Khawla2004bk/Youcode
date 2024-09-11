#include "header.h"

void MenuTri() {
    int choix;

    printf("Que voulez-vous trier ?\n");
    printf("\t1. Par nom (A a Z)\n");
    printf("\t2. Par nom (Z a A)\n");
    printf("\t3. Par moyenne (croissant)\n");
    printf("\t4. Par moyenne (decroissant)\n");
    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    getchar();

    switch (choix)
    {
    case 1:
        TriNomCroissant();
        break;
    case 2:
        TriNomDecroissant();
        break;
    case 3:
        TriMoyenneCroissant();
        break;
    case 4:
        TriMoyenneDecroissant();
        break;
    default:
        printf("Choix invalide.\n");
        break;
    }
}