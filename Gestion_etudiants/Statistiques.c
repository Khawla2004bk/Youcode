#include "header.h"

void Statistiques() {

    printf("Statistiques:\n");
    printf("\tLe nombre total d'etudiants est: %d\n", nb);

    printf("\n\tLe nombre d'etudiants dans chaque departement est:\n");
    EtudientParDep();
    

    printf("\n\tAfficher les 3 etudiants ayant la meilleur note\n");

    MeilleurNote();

    

    printf("\n\tAfficher le nombre d'etudiants qui ont reusssi dans chaque departement\n");
    ReussiteDep();
     
}