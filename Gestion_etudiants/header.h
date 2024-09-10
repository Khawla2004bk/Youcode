#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb = 0;

typedef struct {
    int ID;
    char Nom[30];
    char Prenom[15];
    char DateN[30];
    char Departement[20];
    int Note;
} Etudiant;

Etudiant etudiant[1000];

void AjouterEtudiant();
void AfficherMenuDep();
void ModifierEtudiant();
void MenuModifier();
void AfficherInfos();
void AfficherEtudiant();
void CalculerMoyenne();
void RechercherEtudiant();
void TrierEtudiant();
void Statistiques();

#endif