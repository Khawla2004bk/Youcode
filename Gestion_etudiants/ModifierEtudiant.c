#include "header.h"

void ModifierEtudiant() {
    int id, choix;

    printf("Entrer l'id de l'etudiant que vous voulez modifier: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (etudiant[i].ID == id) {
            AfficherMenuModifier();
            printf("Entrer votre choix : ");
            scanf("%d", &choix);
            getchar();

            switch (choix) {
                case 1:
                    printf("Entrer le nouveau nom: ");
                    scanf("%[^\n]", etudiant[i].Nom);
                    getchar();
                    printf("Modification effectuee avec succes!\n");
                    AfficherInfos(i);
                    break;
                case 2:
                    printf("Entrer le nouveau prenom: ");
                    scanf("%[^\n]", etudiant[i].Prenom);
                    getchar();
                    printf("Modification effectuee avec succes!\n");
                    AfficherInfos(i);
                    break;
                case 3:
                    printf("Entrer la nouvelle date de naissance: ");
                    scanf("%[^\n]", etudiant[i].DateN);
                    printf("Modification effectuee avec succes!\n");
                    AfficherInfos(i);
                    getchar();
                    break;
                case 4:
                    printf("Entrer le nouveau departement: ");
                    AfficherMenuDep();
                    printf("Modification effectuee avec succes!\n");
                    AfficherInfos(i);
                    break;
                case 5:
                    printf("Entrer la nouvelle note: ");
                    scanf("%d", &etudiant[i].Note);
                    getchar();
                    printf("Modification effectuee avec succes!\n");
                    AfficherInfos(i);
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
        }
    
    }
}