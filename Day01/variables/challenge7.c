#include <stdio.h>

int main() {
    int a, b, c;
    float M;
    
    printf("Entrer la valeur de a: ");
    scanf("%d", &a);
    printf("Entrer la valeur de b: ");
    scanf("%d", &b);
    printf("Entrer la valeur de c: ");
    scanf("%d", &c);
    
    M = (a * 2 + b * 3 + c * 5) / 10;
    
    printf("La moyenne pondérée est: %.2f", M);
    
    return 0;
}
