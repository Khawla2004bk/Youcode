#include <stdio.h>
# include <math.h>

int main() {
    int x1, y1, z1, x2, y2, z2, D;
    
    printf("Entrer les coordonnées de A (x1 y1 z1): ");
    scanf("%d %d %d", &x1, &y2, &z1);
    printf("Entrer les coordonnées de B (x2 y2 z1): ");
    scanf("%d %d %d", &x2, &y2, &z1);
    
    D = sqrt((x1 - x2)^2 + (y2 - y1)^2 + (z2 - z1)^2);
    
    printf("La distance entre A et B est: %d", D);
    
    return 0;
}
