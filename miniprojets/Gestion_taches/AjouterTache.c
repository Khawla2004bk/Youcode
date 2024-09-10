#include "header.h"

void AjouterTache() {
    int n;
    char id[30];

    printf("Combien de taches voulez-vous ajouter? ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) { 
        printf("\nL'identifiant de la tache %d: %d\n", i+1, nb+1);
        
        
        //if (strcmp(id, tache[j].ID) != 0) {
        //   strcpy(tache[nb].ID, id);
        //}
    
        
        printf("Entrer le titre de la tache %d: ", i+1);
        scanf("%[^\n]", tache[nb].Titre);
        getchar();

        printf("Entrer la description de la tache %d: ", i+1);
        scanf("%[^\n]", tache[nb].Desc);
        getchar();

        printf("Entrer le deadline de la tache %d (jour-mois-année): ", i+1);
        scanf("%[^\n]", tache[nb].Deadline);
        getchar();

        printf("Entrer le statut de la tache %d\n\t(0 = à réaliser / 1 = finalisée / 2 = en cours de réalisation): ", i+1);
        scanf("%[^\n]", tache[nb].Statut);
        getchar();

        
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        snprintf(tache[nb].Date, sizeof(tache[nb].Date), "%02d-%02d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    

        printf("Tache ajoutée avec succès.\n");
        printf("\t%s | %s | %s | %s | %s | %s\n", tache[i].ID, tache[i].Titre, tache[i].Desc, tache[i].Deadline, tache[i].Statut, tache[i].Date);
        
        nb++;
    }
}