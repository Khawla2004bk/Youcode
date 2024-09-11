#include "header.h"

// Fonction pour trier les étudiants par moyenne en ordre croissant
void TriMoyenneCroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (etudiant[i].Note > etudiant[j].Note) {
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

// Fonction pour trier les étudiants par moyenne en ordre décroissant
void TriMoyenneDecroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (etudiant[i].Note < etudiant[j].Note) {
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