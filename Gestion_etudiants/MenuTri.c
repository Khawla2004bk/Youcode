#include "header.h"

// Fonction qui affiche le menu de tri et permet à l'utilisateur de choisir le critère de tri

void MenuTri() {
    int choix;

    printf("Que voulez-vous trier ?\n");
    printf("\t1. Par nom (A a Z)\n");
    printf("\t2. Par nom (Z a A)\n");
    printf("\t3. Par moyenne (croissant)\n");
    printf("\t4. Par moyenne (decroissant)\n");
    printf("\t5. Par statut de reussite");
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
    case 5:
        TriStatut();
        break;
    default:
        printf("Choix invalide.\n");
        break;
    }
}