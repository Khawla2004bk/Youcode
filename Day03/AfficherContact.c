#include "header.h"

void AfficherContact() {

    for (int i = 0; i < nb; i++) 
        printf("Contact %d\n\tNom: %s | Tel: %s | Email: %s\n", i+1, cont[i].N, cont[i].T, cont[i].E);
}