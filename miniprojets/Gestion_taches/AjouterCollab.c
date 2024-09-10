#include <header.h>

void AjouterCollab() {
    char N[15], P[15], E[30];

    printf("\nCombien de collaborateurs voulez-vous ajouter à cette tâche? ");
    scanf("%d", &tache[nb].nbcollab);
    getchar();

    for (int i = 0; i < tache[nb].nbcollab; i++) {
        printf("\tCollaborateur %d:\n", i + 1);
        
        printf("\t\tNom: ");
        scanf("%[^\n]", tache[nb].collab[i].N);
        getchar();
        
        printf("\t\tPrénom: ");
        scanf("%[^\n]", tache[nb].collab[i].P);
        getchar();
        
        printf("\t\tEmail: ");
        scanf("%[^\n]", tache[nb].collab[i].E);
        getchar();
    }
}