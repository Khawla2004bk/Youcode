#include "header.h"

void AfficherInfos(int i) {

    printf("\tEtudiant %d:\n\t\tId: %d | Nom: %s | Prenom: %s | Date de naissance: %s | Departement: %s | Note generale: %d\n", i + 1, etudiant[i].ID, etudiant[i].Nom, etudiant[i].Prenom, etudiant[i].DateN, etudiant[i].Departement, etudiant[i].Note);
}