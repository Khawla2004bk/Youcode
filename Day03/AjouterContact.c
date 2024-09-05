#include "header.h"

void AjouterContact() {
    int n;
    Contact cont[100];

    printf("Combien de contact voulez-vous ajouter: ");
    scanf("%d", &n);
    getchar();
    
    for (int i = 0; i < n; i++) {
        printf("Entrer les informations du contact %d\n", i+1);
        printf("Nom: ");
        scanf("%[^\n]", cont[nb].N);
        getchar();
        printf("Tel: ");
        scanf("%[^\n]", cont[nb].T);
        getchar();
        printf("Email: ");
        scanf("%[^\n]", cont[nb].E);
        getchar();

        printf("\tNom: %s | Tel: %s | Email: %s\n", cont[nb].N, cont[nb].T, cont[nb].E);

        nb++;
    }

}