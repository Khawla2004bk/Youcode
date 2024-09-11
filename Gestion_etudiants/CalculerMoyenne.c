#include "header.h"

void CalculerMoyenne() {
    int choix, cpt = 0;
    float m, S = 0.0;

    choix = AfficherMenuCalcul();
    
    if (choix == 1) {
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
    
    else if (choix == 2) {
        for (int i = 0; i < nb; i++) {
            S += etudiant[i].Note;
            cpt++;
        }
        m = (float) S / cpt;
        printf("La moyenne generale de l'universite est: %.2f\n", m);
    }

    else
        printf("Choix invalide.\n");
}