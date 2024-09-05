#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb = 0;

typedef struct {
    char N[100][30];
    char T[100][15];
    char E[100][20];
} Contact;

Contact cont[100];

void AjouterContact();
void AfficherContact();
void ModifierContact();
void RechercherContact();
void SupprimerContact();

#endif