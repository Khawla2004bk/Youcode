#include <stdio.h>

int main() {
    float a, b;
    
    printf("Entrer la valeur de a: ");
    scanf("%f", &a);
    printf("Entrer la valeur de b: ");
    scanf("%f", &b);
    
    printf("Somme: %.2f\nDifférence: %.2f\nProduit: %.2f\nDivision: %.2f", a+b, a-b, a*b, a/b);
    
    return 0;
}
