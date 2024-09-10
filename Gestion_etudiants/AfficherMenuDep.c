#include "header.h"

void AfficherMenuDep(int i) {
    int choix;
    char dep[12][50] = {"Biologie", "Mathematiques", "Informatique", "Chimie", "Physique", "Histoire", "Philosophie", "Litterature", "Gestion", "Economie", "Droit", "Geographie"};

    printf("\tLes departements possibles: \n");
    for (int i = 0; i < 12; i++) 
        printf("\t%d. %s\n", i + 1, dep[i]);

    printf("\tEntrez le numéro du département choisi: ");
    scanf("%d", &choix);
    getchar();

    strcpy(etudiant[i].Departement, dep[choix - 1]);

}