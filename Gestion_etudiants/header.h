#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb = 0;
int nbdep[12] = {0};

typedef struct {
    int ID;
    char Nom[30];
    char Prenom[15];
    char DateN[30];
    char Departement[20];
    float Note;
} Etudiant;

Etudiant etudiant[1000];

char dep[12][50] = {"Biologie", "Mathematiques", "Informatique", "Chimie", "Physique", "Histoire", "Philosophie", "Litterature", "Gestion", "Economie", "Droit", "Geographie"};



void AjouterEtudiant();
int AfficherMenuDep();
void ModifierEtudiant();
void AfficherMenuModifier();
void AfficherInfos();
void AfficherEtudiant();
void CalculerMoyenne();
int AfficherMenuCalcul();
void RechercherEtudiant();
int AfficherMenuRecherche();
void TrierEtudiant();
void TriNomCroissant();
void TriNomDecroissant();
void TriMoyenneCroissant();
void TriMoyenneDecroissant();
void Statistiques();
void ReussiteDep();
void MeilleurNote();
void EtudientParDep();
void Menu();
void EtudiantParSeuil()
void Data();
#endif