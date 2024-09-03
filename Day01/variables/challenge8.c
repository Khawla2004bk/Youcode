#include <stdio.h>

int main() {
    int a, b, c;
    int M;
    
    printf("Entrer la valeur de a: ");
    scanf("%d", &a);
    printf("Entrer la valeur de b: ");
    scanf("%d", &b);
    printf("Entrer la valeur de c: ");
    scanf("%d", &c);
    
    M = (a * b * c)^(1/3);
    
    printf("La moyenne géométrique est: %d", M);
    
    return 0;
}
