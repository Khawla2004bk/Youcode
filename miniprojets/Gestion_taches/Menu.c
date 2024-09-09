int main() {
    int choix;

    while (1) {
        printf("Menu:\n");
        printf("1. Ajouter une tâche\n");
        printf("2. Afficher la liste des tâches\n");
        printf("3. Modifier une tâche\n");
        printf("4. Rechercher une tâche\n");
        printf("5. Supprimer une tâche\n");
        printf("6. Quitter\n");

        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                AjouterTache();
                break;
            case 2:
                AfficherListe();
                break;
            case 3:
                ModifierTache();
                break;
            case 4:
                RechercherTache();
                break;
            case 5:
                SupprimerTache();
                break;
            case 6:
                printf("Quitter le programme.\n");
                return 0;
            default:
                printf("Choix invalide. Veuillez choisir entre 1 et 6.\n");
                break;
        }
    }
}
