#include "header.h"

void ajouterMultiplesEtudiants() {
    // Remplir les données pour 10 étudiants
    char noms[10][50] = {"Dupont", "Durand", "Martin", "Bernard", "Dubois", "Thomas", "Robert", "Petit", "Roux", "Moreau"};
    char prenoms[10][50] = {"Jean", "Paul", "Marie", "Sophie", "Lucas", "Chloe", "Alex", "Emma", "Luca", "Anna"};
    char date_naissance[10][11] = {"2000-01-01", "1999-05-15", "2001-12-30", "2000-03-21", "1998-07-12", "2002-11-25", "1999-08-19", "2001-04-16", "2000-10-09", "1999-02-20"};
    char departements[10][30] = {"Physique", "Chimie", "Biologie", "Géologie", "Économie", "Informatique", "Design", "Finance", "Logistique", "Ressources Humaines"};
    float notes_generales[10] = {12.5, 15.0, 9.0, 13.0, 17.0, 10.0, 14.5, 11.0, 8.0, 16.5};

    for (int i = 0; i < 10; i++) {
        if (nb >= 10000) {
            printf("Université pleine.\n");
            return;
        }
        etudiant[nb].ID = nb + 1;
        strcpy(etudiant[nb].Nom, noms[i]);
        strcpy(etudiant[nb].Prenom, prenoms[i]);
        strcpy(etudiant[nb].DateN, date_naissance[i]);
        strcpy(etudiant[nb].Departement, departements[i]);
        etudiant[nb].Note = notes_generales[i];
        nb++;
    }
    printf("10 étudiants ajoutés avec succès.\n");
}