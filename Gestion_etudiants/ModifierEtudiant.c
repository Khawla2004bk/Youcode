#include "header.h"

// Fonction pour modifier les informations d'un étudiant

void ModifierEtudiant() {
    int id, choix;

    printf("Entrer l'id de l'etudiant que vous voulez modifier: ");
    scanf("%d", &id);
    getchar();

    // Trouver l'étudiant avec cet ID
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
                    printf("Entrer le nouveau département:\n");
                    int choixDep = AfficherMenuDep();

                    if (choixDep >= 1 && choixDep <= 12) {
                        strcpy(etudiant[i].Departement, dep[choixDep - 1]);
                        printf("Modification effectuée avec succès!\n");
                    } 
                    else 
                        printf("Choix de département invalide.\n");
                    
                    break;
                case 5:
                    printf("Entrer la nouvelle note: ");
                    scanf("%f", &etudiant[i].Note);
                    getchar();
                    printf("Modification effectuee avec succes!\n");
                    AfficherInfos(i);
                    break;
                case 6:
                    printf("Entrer le nouveau nom: ");
                    scanf("%[^\n]", etudiant[i].Nom);
                    printf("Entrer le nouveau prenom: ");
                    scanf("%[^\n]", etudiant[i].Prenom);
                    printf("Entrer la nouvelle date de naissance: ");
                    scanf("%[^\n]", etudiant[i].DateN);
                    printf("Entrer le nouveau departement: ");
                    int choixDep = AfficherMenuDep();

                    if (choixDep >= 1 && choixDep <= 12) {
                        strcpy(etudiant[i].Departement, dep[choixDep - 1]);
                        printf("Entrer la nouvelle note: ");
                        scanf("%f", &etudiant[i].Note);
                        getchar();
                        printf("Modification effectuée avec succès!\n");
                    } 
                    else 
                        printf("Choix de département invalide.\n");
                    break;
                    
                default:
                    printf("Choix invalide.\n");
                    break;
            }
            AfficherInfos(i);
            return;
        }
    
    }
    printf("L'etudiant n'existe pas.\n");
}