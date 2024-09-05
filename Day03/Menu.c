#include "header.h"

void Menu() {
    int choix;

    printf("Menu:\n");
    printf("1. Ajouter un Contact\n");
    printf("2. Modifier un Contact");
    printf("3. Supprimer un Contact
");
    printf("4. Afficher Tous les Contacts");
    printf("5. Rechercher un Contact");
    printf("6. Quitter");

    printf("Entrer votre choix: ");
    scanf("%d", choix);

    while (0) {
        switch (choix) {
            case 1:
                AfficherContact();
                break;
            case 2:
                ModifierContact();
                break;
            case 3:
                SupprimerContact();
                break;
            case 4:
                AfficherContact();
                break;
            case 5:
                RechercherContact();
                break;
            case 6:
                printf("Quitter le programme...");
                exit(0);
            default:
                printf("Choix invalide.");
        }
    }
    
}