#include "header.h"

// Affiche le nombre d'étudiants par département et ceux ayant une note supérieure d'un seuil

void EtudientParDep() {
    int seuil;

    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < 12; j++) {
            if (strcmp(etudiant[i].Departement, dep[j]) == 0) {
                nbdep[j]++;
                break;
            }
        }
    }
    
    for (int i = 0; i < 12; i++)
        printf("%s: %d\n", dep[i], nbdep[i]);

    
}