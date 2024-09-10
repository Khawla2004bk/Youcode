#include "header.h"

void AfficherMenuDep() {
    int choix;
    char *dep[] = {"Biologie", "Mathematiques", "Informatique", "Chimie", "Physique", "Histoire", "Philosophie", "Litterature", "Gestion", "Economie", "Droit", "Geographie"};

    printf("Les departements possibles: \n");
    for (int i = 0; i < 12; i++) 
        printf("\t%d. %s\n", i + 1, dep[i]);

    printf("Entrez le numéro du département choisi: ");
    scanf("%d", &choix);
    getchar();

    strcpy(etudiant[nb].Departement, dep[choix - 1]);

}