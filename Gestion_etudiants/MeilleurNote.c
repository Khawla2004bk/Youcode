#include "header.h"

// Trouve et affiche les trois meilleurs étudiants

void MeilleurNote() {
    int notes[3]= {-1}, ind[3] = {-1};

    // Trouver les trois meilleurs étudiants
    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < 3; j++) {
            if (etudiant[i].Note > notes[j]) {
                for (int k = 2; k > j; k--) {
                    notes[k] = notes[k - 1];
                    ind[k] = ind[k - 1];
                }
                notes[j] = etudiant[i].Note;
                ind[j] = i;
                break;
            }
        }
    }

    for (int i = 0; i < 3 && ind[i] != -1; i++) {
        AfficherInfos(ind[i]);
    }
}