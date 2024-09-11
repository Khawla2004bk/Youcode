#include "header.h"

// Affiche le nombre d'étudiants par département et ceux ayant une note supérieure d'un seuil

void EtudientParDep() {
    int seuil;
    
    for (int i = 0; i < 12; i++)
        printf("%s: %d\n", dep[i], nbdep[i]);

    printf("\n\tAfficher les etudiants ayant une moyenne superieure a un certain seuil\n");
    printf("Entrez le seuil: ");
    scanf("%d", &seuil);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= seuil)
            AfficherInfos(i);
    }
}