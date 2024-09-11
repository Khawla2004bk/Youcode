#include "header.h"

void TriStatut() {

    printf("Statut de réussite des étudiants :\n");

    printf("Mention: Échec\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note < 10) {
            AfficherInfos(i);
        }
    }

    printf("\nMention: Passable\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 10 && etudiant[i].Note < 12) {
            AfficherInfos(i);
        }
    }

    printf("\nMention: Assez bien\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 12 && etudiant[i].Note < 14) {
            AfficherInfos(i);
        }
    }   
    
    printf("\nMention: Bien\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 14 && etudiant[i].Note < 16) {
            AfficherInfos(i);
        }
    }

    printf("\nMention: Tres bien\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 16) {
            AfficherInfos(i);
        }
    }

}