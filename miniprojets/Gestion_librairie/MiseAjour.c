#include "header.h"

void MiseAjour() {
    char titre[20];
    int q;
    
    printf("Entrer le titre du livre pour modifier sa quantité: ");
    scanf("%[^\n]", titre);
    getchar();
    
    for (int i = 0; i < nb; i++) {
        if (strcmp(T[i], titre) == 0) {
            printf("Entrer la nouvelle quantité: ");
            scanf("%d", &q);
            
            Q[i] = q;
            
            printf("Quantité mise à jour:\n\t%s, %s, %f, %d\n", T[i], A[i], P[i], Q[i]);
        }
    }
}
