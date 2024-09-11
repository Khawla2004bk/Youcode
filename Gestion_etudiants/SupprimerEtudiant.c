#include "header.h"

// Fonction pour supprimer un étudiant

void SupprimerEtudiant() {
    int id, choix;

    printf("Entrer l'id de l'etudiant que vous voulez supprimer: ");
    scanf("%d", &id);
    getchar();

    printf("Voulez-vous confirmer la suppression de l'etudiant?\n");
    printf("\t1. Oui\n\t2. Non\n");
    scanf("%d", &choix);
    getchar();

    if (choix == 1) {
        for (int i = 0; i < nb; i++) {
            if (etudiant[i].ID == id) {
                
                // Suppression de l'étudiant en décalant les éléments suivants
                for (int j = i; j < nb - 1; j++) {
                    etudiant[j] = etudiant[j + 1];
                }
                nb--;
                printf("Etudiant supprime avec succes!\n");
                break;
            }
        }
        printf("L'étudiant n'existe pas.\n");
    }

    else if (choix == 2) {
        printf("Suppression annulee!\n");
    }

    else   
        printf("Choix invalide.\n");
}