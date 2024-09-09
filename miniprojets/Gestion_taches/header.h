#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nb = 0;

typedef struct {
    char ID[30];
    char Titre[100];
    char Desc[200];
    char Deadline[30];
    char Statut[30];
} Todo;

Todo tache[100];

typedef struct {
    char N[15];
    char P[15];
    char E[30];
} Collaborateur;

Collaborateur collab[100];

void AjouterTache();
void AfficherListe();
void ModifierTache();
void RechercherTache();
void SupprimerTache();
//void Statistiques();
void Menu();

#endif