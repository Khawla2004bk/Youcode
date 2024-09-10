#include "header.h"

void SupprimerEtudiant() {
    int id;

    printf("Entrer l'id de l'etudiant que vous voulez supprimer: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (etudiant[i].ID == id) {
            for (int j = i; j < nb - 1; j++) {
                etudiant[j] = etudiant[j + 1];
            }
            nb--;
            printf("Etudiant supprime avec succes!\n");
            break;
        }
    }
}