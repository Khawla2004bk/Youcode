#include "header.h"

void Data() {

    // Remplir les données pour 10 étudiants
    char noms[10][50] = {"Lemoine", "Garnier", "Fournier", "Gibert", "Goulin", "Leblanc", "Perrin", "Lemoine", "Gros", "Bouchard"};
    char prenoms[10][50] = {"Alice", "Julien", "Lucie", "Marc", "Claire", "Louis", "Nina", "Paul", "Sophie", "Antoine"};
    char dates[10][11] = {"1995-03-12", "1996-07-22", "1994-11-05", "1997-02-19", "1998-09-30", "1996-12-15", "1995-06-20", "1997-08-25", "1994-10-12", "1996-01-30"};
    char departements[10][30] = {"Mathematiques", "Chimie", "Informatique", "Histoire", "Philosophie", "Biologie", "Physique", "Litterature", "Economie", "Gestion"};
    float notes[10] = {14.0, 16.5, 13.0, 15.5, 12.0, 17.0, 11.5, 13.5, 14.5, 16.0};

    for (int i = 0; i < 10; i++) {
        if (nb >= 1000) {  // J'ai changé la vérification pour un maximum raisonnable de 1000 étudiants
            printf("Université pleine.\n");
            return;
        }
        etudiant[nb].ID = nb + 1;
        strcpy(etudiant[nb].Nom, noms[i]);
        strcpy(etudiant[nb].Prenom, prenoms[i]);
        strcpy(etudiant[nb].DateN, dates[i]);
        strcpy(etudiant[nb].Departement, departements[i]);
        etudiant[nb].Note = notes[i];
        nb++;
    }
    printf("10 étudiants ajoutés avec succès.\n");
}
