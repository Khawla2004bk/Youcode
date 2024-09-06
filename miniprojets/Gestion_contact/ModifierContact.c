#include "header.h"

void ModifierContact() {
    char nom[30], email[20], tel[15];
    int choix;

    printf("Entrer le nom du contact à modifier: ");
    scanf("%[^\n]", nom);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (strcmp(cont[i].N, nom) == 0) {
            printf("Entrer votre choix:\n1. Modifier address email\n2. Modifier le numèro de téléphone\n\tchoix: ");
            scanf("%d", &choix);
            getchar();
            
            if (choix == 1) {
                printf("Entrer le nouveau email: ");
                scanf("%[^\n]", email);
                getchar();

                strcpy(cont[i].E, email);
                printf("Contact modifié:\n\tNom: %s | Tel: %s | Email: %s\n", nom, cont[i].T, cont[i].E);
            }

            else if (choix == 2) {
                printf("Entrer le nouveau numéro de téléphone: ");
                scanf("%[^\n]", tel);
                getchar();

                strcpy(cont[i].T, tel);
                printf("Contact modifié:\n\tNom: %s | Tel: %s | Email: %s\n", nom, cont[i].T, cont[i].E);
            }

            else
                printf("Choix invalide.");
        }
        
        else
            printf("Contact non trouvé");
    }
}