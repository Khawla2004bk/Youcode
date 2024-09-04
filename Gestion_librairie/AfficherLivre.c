#include "header"

void AfficherLivre() {
    for (int i = 0; i < nb; i++)
        printf("livre %d: titre: %s, auteur: %s, prix: %.2f, quantité: %d\n", i+1, T[i], A[i], P[i], Q[i]);
}
