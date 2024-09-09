#include "header.h"

void SupprimerTache() {
    char id[30];
    printf("Entrez l'identifiant de le tache que vous voulez suprimer : ");
    scanf("%[^\n]", id);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (strcmp(tache[i].ID, id) == 0) {
            for (int j = i; j < nb - 1; j++) {
                tache[j] = tache[j + 1];
            }
            nb--;
            printf("Tache supprimé avec succès.\n");
            return;
        }
    } 
    printf("Tache non trouvé.\n");
}