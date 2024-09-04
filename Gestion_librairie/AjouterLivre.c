#include "header.h"

void AjouterLivre() {
    int n, quantite;
    char titre[30], auteur[20];
    float prix;

    printf("Combien de livres souhaitez vous ajouter: ");
    scanf("%d", &n);
    getchar(); //consommer le caractère "\n"

    for (int i = 0; i < n; i++) {
        printf("le livre %d:\n", i+1);
        printf("Enter le titre: ");
        scanf("%[^\n]", titre);
        getchar();
        printf("Entrer l'auteur: ");
        scanf("%[^\n]", auteur);
        getchar();
        printf("Entrer le prix: ");
        scanf("%f", &prix);
        getchar();
        printf("Entrer la quantité: ");
        scanf("%d", &quantite);
        getchar();
        printf("\ttitre: %s, auteur: %s, prix: %.2f, quantité: %d\n", titre, auteur, prix, quantite);

        strcpy(T[nb], titre);
        strcpy(A[nb], auteur);
        P[nb] = prix;
        Q[nb] = quantite;
        nb++;
    }
}

