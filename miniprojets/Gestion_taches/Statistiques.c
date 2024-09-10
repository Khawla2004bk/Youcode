#include "header.h"

int Statistiques() {
    int enCours = 0, finalise = 0, aRealiser = 0, depasse = 0;
    Todo proche = tache[0];

    for (int i = 0; i < nb; i++) {
        if (strcmp(tache[i].Statut, "2") == 0) 
            enCours++;
        
        else if (strcmp(tache[i].Statut, "1") == 0) 
            finalise++;
        
        else if (strcmp(tache[i].Statut, "0") == 0) 
            aRealiser++;
    
        if (DepasserDeadline(tache[i].Deadline)) 
            depasse++;
    
        if (strcmp(tache[i].Deadline, proche.Deadline) < 0) 
        proche = tache[i];
    
    }

    printf("=== Statistiques ===\n");
    printf("Nombre total de tâches: %d\n", nb);
    printf("Tâches en cours: %d\n", enCours);
    printf("Tâches finalisées: %d\n", finalise);
    printf("Tâches à réaliser: %d\n", aRealiser);
    printf("Tâches dont le deadline est dépassé: %d\n", depasse);
    printf("Tâche la plus proche du deadline: \n\tID: %s | Titre: %s | Deadline: %s\n", 
        proche.ID, proche.Titre, proche.Deadline);



}
void DepasserDeadline() {
    int jour, mois, annee;
    char deadline[30];

    sscanf(deadline, "%d-%d-%d", &jour, &mois, &annee);

    int jourActuel = 10, moisActuel = 9, anneeActuelle = 2024;

    if (annee < anneeActuelle) 
        return 1;
    
    else if (annee == anneeActuelle && mois < moisActuel) 
        return 1;
    
    else if (annee == anneeActuelle && mois == moisActuel && jour < jourActuel) 
        return 1;

    return 0;
}
    

    
    
