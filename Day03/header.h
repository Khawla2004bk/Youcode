#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb = 0;

typedef struct {
    char N[30];
    char T[15];
    char E[20];
} Contact;

Contact cont[100];

void AjouterContact();
void AfficherContact();
void ModifierContact();
void RechercherContact();
void SupprimerContact();

#endif