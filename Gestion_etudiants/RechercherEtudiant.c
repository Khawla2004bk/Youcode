#include "header.h"

void RechercherEtudiant() {
    char nom[30], departement[50];
    int choix, cpt = 0;

    choix = AfficherMenuRecherche();

    if (choix == 1) {
        printf("Entrez le nom de l'etudiant: ");
        scanf("%[^\n]", nom);
        getchar();

        for (int i = 0; i < nb; i++) {
            if (strcmp(etudiant[i].Nom, nom) == 0) {
                printf("Etudiant %d:\n", i + 1);
                AfficherInfos(i);
                cpt++;
            }
        }
        if (cpt == 0)
                printf("Etudiant non trouvé\n");
    }

    else if (choix == 2) {
        printf("Entrez le departement: ");
        scanf("%[^\n]", departement);
        getchar();

        for (int i = 0; i < nb; i++) {
            if (strcmp(etudiant[i].Departement, departement) == 0) {
                printf("Etudiant %d:\n", i + 1);
                AfficherInfos(i);
                cpt++;
            }
        }
        if (cpt == 0)
                printf("Departement non trouvé\n");
    }

    else
        printf("Choix invalide.\n");

}