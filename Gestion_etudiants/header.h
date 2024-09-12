#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb = 0;         // Nombre total d'étudiants
int nbdep[12] = {0};// // Nombre d'étudiants par département

// Structure représentant un étudiant
typedef struct {
    int ID;
    char Nom[30];
    char Prenom[15];
    char DateN[30];
    char Departement[20];
    float Note;
} Etudiant;

// Tableau contenant tous les etudiants
Etudiant etudiant[1000];

// Tableaux pour les départements
char dep[12][50] = {"Biologie", "Mathematiques", "Informatique", "Chimie", "Physique",
     "Histoire", "Philosophie", "Litterature", "Gestion", "Economie", "Droit", "Geographie"};


// Fonctions de Menu
void Menu();
void MenuTri();
int AfficherMenuRecherche();
int AfficherMenuCalcul();
void AfficherMenuModifier();
int AfficherMenuDep();

// fonctions de tri
void TriNomCroissant();
void TriNomDecroissant();
void TriMoyenneCroissant();
void TriMoyenneDecroissant();
void TriStatut();

// Statistiques
void Statistiques();
void EtudientParDep();
void MeilleurNote();
void EtudiantParSeuil();
void ReussiteDep();

// Manipulation
void ModifierEtudiant();
void SupprimerEtudiant();

void AjouterEtudiant();
void AfficherInfos(int i);
void CalculerMoyenne();
void RechercherEtudiant();

void Data();

#endif