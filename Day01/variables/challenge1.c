#include <stdio.h>

int main() {
    int age;
    char nom[20], prenom[20], sexe, email[15];
    
    printf("Donner votre nom: ");
    scanf("%s", nom);
    
    printf("Donner votre prenom: ");
    scanf("%s", prenom);
    
    printf("Donner votre age: ");
    scanf("%d", &age);
    
    printf("Donner votre sexe (H/F): ");
    scanf(" %c", &sexe);
    
    printf("Donner votre email: ");
    scanf("%s", email);
    
    printf("nom : %s\nprenom : %s\nage : %d\nsexe : %c\nemail : %s", nom, prenom, age, sexe, email);
    return 0;
}
