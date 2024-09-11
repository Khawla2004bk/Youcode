#include "header.h"

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