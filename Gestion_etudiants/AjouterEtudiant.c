#include "header.h"

void AjouterEtudiant() {
    int n;

    printf("Combien d'etudiants voulez-vous ajouter: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("\tL'id de l'etudiant %d: %d\n", i + 1, nb+1);
        etudiant[i].ID = nb + 1;

        printf("\tEntrer le nom de l'etudiant %d: ", i + 1);
        scanf("%[^\n]", etudiant[i].Nom);
        getchar();

        printf("\tEntrer le prenom de l'etudiant %d: ", i + 1);
        scanf("%s", etudiant[i].Prenom);
        getchar();

        printf("\tEntrer la date de naissance de l'etudiant %d (jj-mm-aaaa): ", i + 1);
        scanf("%[^\n]", etudiant[i].DateN);
        getchar();

        
        printf("\tEntrer le departement de l'etudiant %d:\n", i + 1);
        AfficherMenuDep(i);

        printf("\tEntrer la note generale de l'etudiant %d: ", i + 1);
        scanf("%d", &etudiant[i].Note);
        getchar();

        printf("Etudiant ajoute avec succss!\n");
        AfficherInfo(i);
    
        nb++;
    }
}