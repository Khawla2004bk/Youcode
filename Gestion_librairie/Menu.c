#include "header.h"

void Menu() {
    int choix;

    printf("MENU:\n");
    printf("\t1. Ajouter un livre\n");
    printf("\t2. Afficher les livres en stock\n");
    printf("\t3. Rechercher un livre\n");
    printf("\t4. Mise à jour la quantité d'un livre\n");
    printf("\t5. Supprimer un livre\n");
    printf("\t6. \n");
    printf("\t7. Quitter le programme\n");

    printf("Quel est votre choix: ");
    scanf("%d", &choix);
    getchar();

    switch (choix) {
        case 1:
            AjouterLivre();
            Menu();
            break;
        case 2:
            AfficherLivre();
            Menu();
            break;
        case 3:
            RechercherLivre();
            Menu();
            break;
        case 4:
            MiseAjour();
            Menu();
            break;
        case 5:
            SupprimerLivre();
            Menu();
            break;
        /*case 6:*/

        case 7:
            exit(0);
        default:
            printf("choix invalide");
    }
}
