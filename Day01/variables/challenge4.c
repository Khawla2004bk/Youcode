#include <stdio.h>

int main() {
    float km, m;
    
    printf("Entrer la vitesse en kilomètres par heure: ");
    scanf("%f", &km);
    
    m = km * 0.27778;
    
    printf("Cette distance en mètres par secondes est: %f", m);
    
    return 0;
}
