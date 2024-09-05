#include "header.h"

void SupprimerContact() {
    char nom[20];

    printf("Entrer le nom du contact à supprimer: ");
    scanf("%[^\n]", nom);

    for (int i = 0; i < nb; i++) {
        if (strcmp(cont[i].N, nom) == 0) {
            printf("Contact touvé\n");

            for (int j = i; j < nb; j++) {
                strcpy(cont[j].N, cont[j+1].N);
                strcpy(cont[j].T, cont[j+1].T);
                strcpy(cont[j].E, cont[j+1].E);
            }

            nb--;
            printf("Contact supprimé\n");
            break;
        }

        else
            printf("Contact non trouvé\n");
    }
}