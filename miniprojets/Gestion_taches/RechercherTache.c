#include "header.h"

void RechercherTache() {
    int choix, i;
    char id[30], titre[30];

    printf("Choisissez l'option convenable\n");
    printf("1. Rechercher une tâche par son identifiant.\n");
    printf("2. Rechercher une tâche par son titre.\n");
    printf("Entrer votre choix: ");
    scanf("%d", &choix);
    getchar();

    if (choix < 1 || choix > 2) {
        printf("Choix invalide. Veuillez choisir entre 1 et 2.\n");
        return;
    }
    else if (choix == 1) {
        printf("Entrer l'identifiant de la tache recherchée: ");
        scanf("%s", id);
        getchar();

        for (int i = 0; i < nb; i++) {
            if (strcmp(tache[i].ID, id) == 0) {
                printf("Tâche correspondante:\n");
                printf("\tID : %s | Titre : %s | Description : %s | Deadline : %s | Statut : %s\n", tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut);
                return;
            }
        }
        printf("Aucune tâche correspondante.\n");  
    }
    else {
        printf("Entrer le titre de la tâche recherchée: ");
        scanf("%s", titre);

        for (int i = 0; i < nb; i++) {
            if (strcmp(tache[i].Titre, titre) == 0) {
                printf("Tâche correspondante:\n");
                printf("\tID : %s | Titre : %s | Description : %s | Deadline : %s | Statut : %s\n", tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut);
                break;
            }
        }                
        printf("Aucune tâche correspondante.\n");
    }
}