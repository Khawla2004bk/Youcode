#include "header.h"

// Fonction pour trier les étudiants par nom en ordre décroissant

void TriNomCroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (strcmp(etudiant[i].Nom, etudiant[j].Nom) > 0) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
    }
    // Affichage des étudiants triés
    for (int i = 0; i < nb; i++) {
        AfficherInfos(i);
   }
}

// Fonction pour trier les étudiants par nom en ordre croissant
void TriNomDecroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (strcmp(etudiant[i].Nom, etudiant[j].Nom) < 0) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
    }
    // Affichage des étudiants triés
    for (int i = 0; i < nb; i++) {
        AfficherInfos(i);
    }
}