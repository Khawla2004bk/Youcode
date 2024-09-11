#include "header.h"

void Menu() {
    int choix;

    while (1) {
        printf("Menu:\n");
        printf("\t1. Ajouter un etudiant\n");
        printf("\t2. Modifier un etudiant\n");
        printf("\t3. Afficher les details d'un etudiant\n");
        printf("\t4. Calculer la moyenne generale d'un departement\n");
        printf("\t5. Rechercher un etudiant\n");
        printf("\t6. Supprimer un etudiant\n");
        printf("\t7. Trier les etudiants\n");
        printf("\t8. Afficher les statistiques\n");
        printf("\t9. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                AjouterEtudiant();
                break;

            case 2:
                ModifierEtudiant();
                break;

            case 3:
                for (int i = 0; i < nb; i++)
                    AfficherInfos(i);
                break;

            case 4:
                CalculerMoyenne();
                break;

            case 5:
                RechercherEtudiant();
                break;

            case 6:
                SupprimerEtudiant();
                break;

            case 7:
                MenuTri();
                break;

            case 8:
                Statistiques();
                break;

            case 9:
                exit(0);
                break;

            default:
                printf("Choix invalide.\n");
                break;
        }
    }
}