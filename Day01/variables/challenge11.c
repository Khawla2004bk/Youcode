#include <stdio.h>

int main() {
    float l, L, S;

    printf("Entrer la longueur: ");
    scanf("%f", &l);
    printf("Entrer la largeur: ");
    scanf("%f", &L);
    
    S = l * L;
    
    printf("Lsurface est: %.2f", S);
    
    return 0;
}
