#include <stdio.h>

int main() {
    float km, y;
    
    printf("Entrer la distance en kilomètres: ");
    scanf("%f", &km);
    
    y = km * 1093.61;
    
    printf("Cette distance en yards est: %f", y);
    
    return 0;
}
