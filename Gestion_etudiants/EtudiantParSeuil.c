#include "header.h"

// Affiche les étudiants dont la note est supérieure ou égale à un seuil donné par l'utilisateur

void EtudiantParSeuil() {
    int seuil;

    printf("Entrez le seuil: ");
    scanf("%d", &seuil);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= seuil)
            AfficherInfos(i);
    }
}