#include "header.h"

void ModifierTache() {
    char id[30], desc[200], statut[30], deadline[30];
    int choix;

    printf("Entrer l'id de la tache que vous voulez modifier: ");
    scanf("%s", id);
    getchar();

    int i;
    for (i = 0; i < nb; i++) {
        if (strcmp(tache[i].ID, id) == 0) {
            printf("Choisissez l'option convenable\n");
            printf("1. Modifier la description d'une tâche.\n");
            printf("2. Modifier le statut d'une tâche.\n");
            printf("3. Modifier le deadline d'une tâche.\n");

            printf("Entrer votre choix: ");
            scanf("%d", &choix);
            getchar();

            switch (choix) {
                case 1:
                    printf("Entrer la nouvelle description: ");
                    scanf("%[^\n]", desc);
                    strcpy(tache[i].Desc, desc);
                    break;
                case 2:
                    printf("Entrer le nouveau statut: ");
                    scanf("%[^\n]", statut);
                    strcpy(tache[i].Statut, statut);
                    break;
                case 3:
                    printf("Entrer le nouveau deadline: ");
                    scanf("%[^\n]", deadline);
                    strcpy(tache[i].Deadline, deadline);
                    break;
                default:
                    printf("Choix invalide");
                    break;
            }
        }
        printf("Tâche modifié:\n\tID: %s | Description: %s | Statut: %s | Deadline: %s\n", tache[i].ID, tache[i].Desc, tache[i].Statut, tache[i].Deadline);
        return;
    }
    
}
