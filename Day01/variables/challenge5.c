#include <stdio.h>

int main() {
    float T;
    
    printf("Entrer la température en Celsius: ");
    scanf("%f", &T);
    
    if (T < 0)
        printf("Solide");
    else if (T < 100)
        printf("Liquide");
    else
        printf("Gaz");
    
    return 0;
}
