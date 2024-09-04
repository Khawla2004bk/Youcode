#include "header.h"

void RechercherLivre() {
    char titre[20];

    printf("Entrer le titre du livre: ");
    scanf("%[^\n]", titre);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (strcmp(T[i], titre) == 0) {
            printf("Livre trouvé:\n\t%s, %s, %f, %d\n", titre, A[i], P[i], Q[i]);
            break;
        }
    }
}
