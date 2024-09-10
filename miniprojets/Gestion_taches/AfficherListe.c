#include "header.h"

void AfficherListe() {
    int choix;

    printf("Choisissez l'option convenable\n");
    printf("1. Afficher la liste de toutes les tâches.\n");
    printf("2. Afficher la liste de toutes les tâches par deadline.\n");
    printf("3. Afficher la liste de toutes les tâches par ordre alphabétique.\n");

    printf("Entrer votre choix: ");
    scanf("%d", &choix);
    getchar();


    switch (choix) {
        case 1:
            printf("Liste des tâches:\n");
            for (int i = 0; i < nb; i++) 
                printf("Tache %d\n\tID: %s | Titre: %s | Description: %s | Deadline: %s | Statut: %s | Date: %s\n", i+1, tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut, tache[i].Date);
            break;
        
        case 2:
            for (int i = 0; i < nb - 1; i++) {
                for (int j = 0; j < nb - i - 1; j++) {
                    if (strcmp(tache[j].Deadline, tache[j + 1].Deadline) > 0) {
                        Todo tmp = tache[j];
                        tache[j] = tache[j + 1];
                        tache[j + 1] = tmp;
                    }
                }
            }
            printf("Liste des tâches:\n");
            for (int i = 0; i < nb; i++) {
                printf("Tache %d\n\tID: %s | Titre: %s | Description: %s | Deadline: %s | Statut: %s | Date: %s\n", i+1, tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut, tache[i].Date);
            }
            break;

        case 3:
            for (int i = 0; i < nb-1; i++) {
                for (int j = 0; j < nb-i-1; j++) {
                    if (strcmp(tache[j].Titre, tache[j+1].Titre) > 0) {
                        Todo tmp = tache[j];
                        tache[j] = tache[j+1];
                        tache[j+1] = tmp;
                    }
                }
            }
            printf("Liste des tâches:\n");
            for (int i = 0; i < nb; i++) {
                printf("Tâche %d\n\tID: %s | Titre: %s | Description: %s | Deadline: %s | Statut: %s | Date: %s\n",
                   i + 1, tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut, tache[i].Date);
            }
            break;

        default:
            printf("Choix invalide.\n");
            break;
    } 
}
