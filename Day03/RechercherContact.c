#include "header.h"

void RechercherContact() {
    char nom[30];

    printf("Enter le nom du contact: ");
    scanf("%[^\n]", nom);
    getchar();

    for (i = 0 ; i < nb; i++) {
        if (strcmp(cont[i].N, nom) == 0) {
            printf("Contact trouvé:\n\tNom: %s | Tel: %s | Email: %s\n", nom, cont[i].T, cont[i].E);
            break;
        }
    }
}