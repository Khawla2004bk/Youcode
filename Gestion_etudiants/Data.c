#include "header.h"

void Data() {

    // Remplir automatiquement la base de données avec les informations de 10 étudiants prédéfinis.
    char noms[10][50] = {"El Amrani", "Benali", "Ait El Caid", "Chouaib", "El Fassi", "Ouchrif", "Kabbaj", "Rami", "Jabri", "Berrada"};
    char prenoms[10][50] = {"Fatima", "Mohamed", "Khadija", "Omar", "Nadia", "Youssef", "Sara", "Ali", "Zineb", "Hassan"};
    char dates[10][11] = {"12-03-1995", "22-07-1996", "05-11-1994", "19-02-1997", "30-09-1998", "15-12-1996", "20-06-1995", "25-08-1997", "12-10-1994", "30-01-1996"};
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
