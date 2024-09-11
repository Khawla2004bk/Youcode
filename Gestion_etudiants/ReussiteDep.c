#include "header.h"

void ReussiteDep() {
    
    for (int i = 0; i < 12; i++) {
        int cpt = 0;

        for (int j = 0; j < nb; j++) {
            if (etudiant[j].Note >= 10 && strcmp(etudiant[j].Departement, dep[i]) == 0)
                cpt++;
        }

        printf("%s: %d\n", dep[i], cpt);

        if (cpt == 0)
            printf("Aucun etudiant n'a reussi dans ce departement.\n");
    }
}