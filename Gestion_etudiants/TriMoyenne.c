#include "header.h"

void TriMoyenneCroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (etudiant[i].Note > etudiant[j].Note) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
        AfficherInfos(i);
    }

}

void TriMoyenneDecroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (etudiant[i].Note < etudiant[j].Note) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
        AfficherInfos(i);
    }

}