#include "header.h"

// Affiche le menu de recherche d'un étudiant

int AfficherMenuRecherche() {
    int choix;

    printf("Que voulez-vous rechercher ?\n");
    printf("\t1. Par nom\n");
    printf("\t2. Par departement\n");

    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    getchar();

    return choix;
}