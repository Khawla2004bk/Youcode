#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb = 0;         // Nombre total d'étudiants
int nbdep[12] = {0};// // Nombre d'étudiants par département

// Structure représentant un étudiant
typedef struct {
    int ID;
    char Nom[30];
    char Prenom[15];
    char DateN[30];
    char Departement[20];
    float Note;
} Etudiant;

// Tableau contenant tous les etudiants
Etudiant etudiant[1000];

// Tableaux pour les départements
char dep[12][50] = {"Biologie", "Mathematiques", "Informatique", "Chimie", "Physique",
     "Histoire", "Philosophie", "Litterature", "Gestion", "Economie", "Droit", "Geographie"};



void AjouterEtudiant();
int AfficherMenuDep();
void ModifierEtudiant();
void AfficherMenuModifier();
void AfficherInfos(int i);
void AfficherEtudiant();
void CalculerMoyenne();
int AfficherMenuCalcul();
void RechercherEtudiant();
int AfficherMenuRecherche();
void MenuTri();
void TriNomCroissant();
void TriNomDecroissant();
void TriMoyenneCroissant();
void TriMoyenneDecroissant();
void Statistiques();
void ReussiteDep();
void MeilleurNote();
void EtudientParDep();
void Menu();
void EtudiantParSeuil();
void Data();

#endif


// Affiche les informations d'un étudiant donné par son index dans le tableau

void AfficherInfos(int i) {

    printf("\tEtudiant %d:\n\t\tId: %d | Nom: %s | Prenom: %s | Date de naissance: %s | Departement: %s | Note generale: %.2f\n",
     i + 1, etudiant[i].ID, etudiant[i].Nom, etudiant[i].Prenom, etudiant[i].DateN, etudiant[i].Departement, etudiant[i].Note);
}


// Affiche le menu de calcul des moyennes

int AfficherMenuCalcul() {
    int choix;

    printf("Que voulez vous calculer ?\n");
    printf("\t1. La moyenne generale d'un departement\n");
    printf("\t2. La moyenne generale de toute l'universite\n");

    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    getchar();

    return choix;

}


// Affiche le menu des départements disponibles

int AfficherMenuDep() {
    int choix;

    printf("\tLes departements possibles: \n");
    for (int i = 0; i < 12; i++) 
        printf("\t%d. %s\n", i + 1, dep[i]);

    printf("\t\nEntrez le numéro du département choisi: ");
    scanf("%d", &choix);
    getchar();

    return choix;
}


// Affiche le menu de modification des informations d'un étudiant

void AfficherMenuModifier() {

    printf("Quelle information souhaitez-vous modifier ?\n");
    printf("\t1. Nom\n\t2. Prenom\n\t3. Date de naissance\n\t4. Departement\n\t5. Note\n\t6. Tout modifier\n");

}


// Affiche le menu de recherche d'un étudiant

int AfficherMenuRecherche() {
    int choix;

    printf("Que voulez-vous rechercher ?\n");
    printf("\t1. Par nom\n");
    printf("\t2. Par departement\n");

    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    getchar();

    return choix;
}

// Ajoute un ou plusieurs étudiants

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
            nbdep[choix - 1]++;     // Incrémenter le nombre d'étudiants pour le département sélectionné
        }
        else {
            printf("Choix invalide.\n");
            i--;    // Répète l'entrée pour l'étudiant actuel
            continue;
        }

        printf("\tEntrer la note generale de l'etudiant %d: ", i + 1);
        scanf("%f", &etudiant[nb].Note);
        getchar();

        

        printf("Etudiant ajoute avec succss!\n");
        AfficherInfos(nb);

        nb++;
    }
}

// Calcule et affiche la moyenne des notes

void CalculerMoyenne() {
    int choix, cpt = 0;
    float m, S = 0.0;

    choix = AfficherMenuCalcul();
    
    if (choix == 1) {
        printf("Quel departement voulez-vous calculer sa moyenne:\n");
        choix = AfficherMenuDep();

        for (int i = 0; i < nb; i++) {
            if (strcmp(etudiant[i].Departement, dep[choix - 1]) == 0) {
                S += etudiant[i].Note;
                cpt++;
            }
        }
        

        if (cpt > 0) {
            m = S / cpt;
            printf("La moyenne de departement %s est: %.2f\n", dep[choix - 1], m);
        }
        else
            printf("Il n'y a aucun etudiant dans ce departement.\n");
    }
    
    else if (choix == 2) {
        for (int i = 0; i < nb; i++) {
            S += etudiant[i].Note;
            cpt++;
        }
        m = (float) S / cpt;
        printf("La moyenne generale de l'universite est: %.2f\n", m);
    }

    else
        printf("Choix invalide.\n");
}

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

// Affiche les étudiants dont la note est supérieure ou égale à un seuil donné par l'utilisateur

void EtudiantParSeuil() {
    int seuil;

    
    printf("Entrez le seuil: ");
    scanf("%d", &seuil);
    getchar();

    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= seuil)
            AfficherInfos(i);
    }

}

// Affiche le nombre d'étudiants par département et ceux ayant une note supérieure d'un seuil

void EtudientParDep() {
    int seuil;

    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < 12; j++) {
            if (strcmp(etudiant[i].Departement, dep[j]) == 0) {
                nbdep[j]++;
                break;
            }
        }
    }
    
    for (int i = 0; i < 12; i++)
        printf("%s: %d\n", dep[i], nbdep[i]);

    
}

// Trouve et affiche les trois meilleurs étudiants

void MeilleurNote() {
    int notes[3]= {-1}, ind[3] = {-1};

    // Trouver les trois meilleurs étudiants
    for (int i = 0; i < nb; i++) {      // Parcourt tous les étudiants
        for (int j = 0; j < 3; j++) {   // Parcourt les trois meilleures notes
            if (etudiant[i].Note > notes[j]) {      // Vérifie si la note actuelle est meilleure que la note enregistrée
                for (int k = 2; k > j; k--) {
                    notes[k] = notes[k - 1];
                    ind[k] = ind[k - 1];
                }
                // Insère la nouvelle meilleure note et son index
                notes[j] = etudiant[i].Note;
                ind[j] = i;
                break;
            }
        }
    }

    for (int i = 0; i < 3 && ind[i] != -1; i++) {
        AfficherInfos(ind[i]);
    }
}

// Fonction qui affiche le menu de tri et permet à l'utilisateur de choisir le critère de tri

void MenuTri() {
    int choix;

    printf("Que voulez-vous trier ?\n");
    printf("\t1. Par nom (A a Z)\n");
    printf("\t2. Par nom (Z a A)\n");
    printf("\t3. Par moyenne (croissant)\n");
    printf("\t4. Par moyenne (decroissant)\n");
    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    getchar();

    switch (choix)
    {
    case 1:
        TriNomCroissant();
        break;
    case 2:
        TriNomDecroissant();
        break;
    case 3:
        TriMoyenneCroissant();
        break;
    case 4:
        TriMoyenneDecroissant();
        break;
    default:
        printf("Choix invalide.\n");
        break;
    }
}

// Fonction pour modifier les informations d'un étudiant

void ModifierEtudiant() {
    int id, choix, choixDep;

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
                    choixDep = AfficherMenuDep();

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
                    choixDep = AfficherMenuDep();

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

// Fonction pour rechercher un étudiant

void RechercherEtudiant() {
    char nom[30], departement[50];
    int choix, cpt = 0;

    choix = AfficherMenuRecherche();

    if (choix == 1) {
        printf("Entrez le nom de l'etudiant: ");
        scanf("%[^\n]", nom);
        getchar();

        for (int i = 0; i < nb; i++) {
            if (strcmp(etudiant[i].Nom, nom) == 0) {
                printf("Etudiant %d:\n", i + 1);
                AfficherInfos(i);
                cpt++;
            }
        }
        if (cpt == 0)
                printf("Etudiant non trouvé\n");
    }

    else if (choix == 2) {
        printf("Entrez le departement: ");
        scanf("%[^\n]", departement);
        getchar();

        for (int i = 0; i < nb; i++) {
            if (strcmp(etudiant[i].Departement, departement) == 0) {
                printf("Etudiant %d:\n", i + 1);
                AfficherInfos(i);
                cpt++;
            }
        }
        if (cpt == 0)
            printf("Departement non trouvé\n");
    }

    else
        printf("Choix invalide.\n");

}

// Fonction pour afficher le nombre d'étudiants ayant réussi dans chaque département

void ReussiteDep() {
    
    for (int i = 0; i < 12; i++) {
        int cpt = 0;

        for (int j = 0; j < nb; j++) {
            if (etudiant[j].Note >= 10 && strcmp(etudiant[j].Departement, dep[i]) == 0)
                cpt++;
        }

        printf("%s: %d\n", dep[i], cpt);

        if (cpt == 0)
            printf("Aucun etudiant n'a reussi dans ce departement.\n");
    }
}

// Fonction pour afficher les statistiques concernant les étudiants

void Statistiques() {

    printf("Statistiques:\n");
    printf("\tLe nombre total d'etudiants est: %d\n", nb);

    printf("\n\tLe nombre d'etudiants dans chaque departement est:\n");
    EtudientParDep();   

    printf("\n\tAfficher les 3 etudiants ayant la meilleur note\n");
    MeilleurNote();

    printf("\n\tAfficher les etudiants ayant une moyenne superieure a un certain seuil\n");
    EtudiantParSeuil();

    printf("\n\tAfficher le nombre d'etudiants qui ont reusssi dans chaque departement\n");
    ReussiteDep();
     
}

// Fonction pour supprimer un étudiant

void SupprimerEtudiant() {
    int id, choix;

    printf("Entrer l'id de l'etudiant que vous voulez supprimer: ");
    scanf("%d", &id);
    getchar();

    printf("Voulez-vous confirmer la suppression de l'etudiant?\n");
    printf("\t1. Oui\n\t2. Non\n");
    scanf("%d", &choix);
    getchar();

    if (choix == 1) {
        for (int i = 0; i < nb; i++) {
            if (etudiant[i].ID == id) {
                
                // Suppression de l'étudiant en décalant les éléments suivants
                for (int j = i; j < nb - 1; j++) {
                    etudiant[j] = etudiant[j + 1];
                }
                nb--;
                printf("Etudiant supprime avec succes!\n");
                break;
            }
        }
        printf("L'étudiant n'existe pas.\n");
    }

    else if (choix == 2) {
        printf("Suppression annulee!\n");
    }

    else   
        printf("Choix invalide.\n");
}

// Fonction pour trier les étudiants par moyenne en ordre croissant
void TriMoyenneCroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (etudiant[i].Note > etudiant[j].Note) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
    }
    // Affichage des étudiants triés
    for (int i = 0; i < nb; i++) {
        AfficherInfos(i);
    }
}

// Fonction pour trier les étudiants par moyenne en ordre décroissant
void TriMoyenneDecroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (etudiant[i].Note < etudiant[j].Note) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
    }
    // Affichage des étudiants triés
    for (int i = 0; i < nb; i++) {
        AfficherInfos(i);
    }
}

// Fonction pour trier les étudiants par nom en ordre décroissant

void TriNomCroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (strcmp(etudiant[i].Nom, etudiant[j].Nom) > 0) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
    }
    // Affichage des étudiants triés
    for (int i = 0; i < nb; i++) {
        AfficherInfos(i);
   }
}

// Fonction pour trier les étudiants par nom en ordre croissant
void TriNomDecroissant() {

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (strcmp(etudiant[i].Nom, etudiant[j].Nom) < 0) {
                Etudiant temp = etudiant[i];
                etudiant[i] = etudiant[j];
                etudiant[j] = temp;
            }
        }
    }
    // Affichage des étudiants triés
    for (int i = 0; i < nb; i++) {
        AfficherInfos(i);
    }
}

// Fonction pour trier les étudiants par statut de réussite
void TriStatut() {

    printf("Statut de réussite des étudiants :\n");

    printf("Mention: Échec\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note < 10) {
            AfficherInfos(i);
        }
    }

    printf("\nMention: Passable\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 10 && etudiant[i].Note < 12) {
            AfficherInfos(i);
        }
    }

    printf("\nMention: Assez bien\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 12 && etudiant[i].Note < 14) {
            AfficherInfos(i);
        }
    }   
    
    printf("\nMention: Bien\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 14 && etudiant[i].Note < 16) {
            AfficherInfos(i);
        }
    }

    printf("\nMention: Tres bien\n");
    for (int i = 0; i < nb; i++) {
        if (etudiant[i].Note >= 16) {
            AfficherInfos(i);
        }
    }
}

// Fonction qui affiche le menu principal et permet à l'utilisateur de choisir parmi les différentes options
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

// Fonction principale du programme
int main() {
    
    // Remplit le tableau d'étudiants avec des données prédéfinies
    Data();

    // Affiche le menu principal et permet à l'utilisateur d'interagir avec le programme
    Menu();

    return 0;
}