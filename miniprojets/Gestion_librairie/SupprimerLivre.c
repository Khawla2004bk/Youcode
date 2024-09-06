#include "header.h"

void SupprimerLivre() {
    char titre[20];
    
    printf("Entrer le titre du livre que vous voulez supprimer: ");
    scanf("%[^\n]", titre);
    
    for (int i = 0; i < nb; i++) {
        if (strcmp(titre, T[i]) == 0) {
            for (int j = i; j < nb; j++) {
                strcpy(T[j], T[j+1]);
                strcpy(A[j], A[j+1]);
                P[j] = P[j+1];
                Q[j] = Q[j+1];
            }
            nb--;
            printf("livre supprimé\n");
            break;
        }
    }
}
