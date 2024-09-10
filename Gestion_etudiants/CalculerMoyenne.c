#include "header.h"

void CalculerMoyenne() {
    int choix, S = 0, cpt = 0;
    float m;

    printf("Quel departement voulez-vous calculer sa moyenne:\n");
    choix = AfficherMenuDep();

    for (int i = 0; i < nb; i++) {
        if (strcmp(etudiant[i].Departement, dep[choix - 1]) == 0) {
            S += etudiant[i].Note;
            cpt++;
        }
    }

    if (cpt > 0) {
        m = (float) S / cpt;
        printf("La moyenne de departement %s est: %.2f\n", dep[choix - 1], m);
    }
    else
        printf("Il n'y a aucun etudiant dans ce departement.\n");
}