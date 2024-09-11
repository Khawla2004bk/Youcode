#include "header.h"

void AjouterEtudiant() {
    int n, choix;

    printf("Combien d'etudiants voulez-vous ajouter: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("\tL'id de l'etudiant %d: %d\n", i + 1, nb+1);
        etudiant[nb].ID = nb + 1;

        printf("\tEntrer le nom de l'etudiant %d: ", i + 1);
        scanf("%[^\n]", etudiant[nb].Nom);
        getchar();

        printf("\tEntrer le prenom de l'etudiant %d: ", i + 1);
        scanf("%[^\n]", etudiant[nb].Prenom);
        getchar();

        printf("\tEntrer la date de naissance de l'etudiant %d (jj-mm-aaaa): ", i + 1);
        scanf("%[^\n]", etudiant[nb].DateN);
        getchar();

        
        printf("\tEntrer le departement de l'etudiant %d:\n", i + 1);
        choix = AfficherMenuDep();
        

        if (choix >= 1 && choix <= 12) {
            strcpy(etudiant[nb].Departement, dep[choix - 1]);
            nbdep[choix - 1]++;
        }
        else {
            printf("Choix invalide.\n");
            i--;
            continue;
        }

        printf("\tEntrer la note generale de l'etudiant %d: ", i + 1);
        scanf("%.2f", &etudiant[nb].Note);
        getchar();

        

        printf("Etudiant ajoute avec succss!\n");
        AfficherInfos(nb);

        nb++;
    }
}