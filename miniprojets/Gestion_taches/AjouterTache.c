#include "header.h"

void AjouterTache() {
    int n;
    char id[30];

    printf("Combien de taches voulez-vous ajouter? ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) { 
        printf("Entrer l'identifiant de la tache %d: ", i+1);
        scanf("%[^\n]", id);
        getchar();

        for (int j = 0; j < nb; j++) {
            if (strcmp(id, tache[j].ID) == 0) {
                printf("ID déjà utilisé. Veuillez saisir nouveau id: ");
                scanf("%[^\n]", id);
                getchar();
                i--;
                break;
            }
        }
    }
        
        strcpy(tache[nb].ID, id);
        
        printf("Entrer le titre de la tache %d: ", i+1);
        scanf("%[^\n]", tache[nb].Titre);
        getchar();

        printf("Entrer la description de la tache %d: ", i+1);
        scanf("%[^\n]", tache[nb].Desc);
        getchar();

        printf("Entrer le deadline de la tache %d (jour-mois-année): ", i+1);
        scanf("%[^\n]", tache[nb].Deadline);
        getchar();

        printf("Entrer le statut de la tache %d: (à réalise / en cours de réalisation / finalisée) ", i+1);
        scanf("%[^\n]", tache[nb].Statut);
        getchar();

        printf("Tache ajoutée avec succès.\n");
        printf("\t%s | %s | %s | %s | %s\n", tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut);
        
        nb++;
    
}