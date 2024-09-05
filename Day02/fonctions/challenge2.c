#include <stdio.h>

int mult(int a, int b){
    return a * b;
}

int main() {
    int a, b;

    printf("Entrez un nombre : ");
    scanf("%d", &a);
    printf("Entrez un nombre : ");
    scanf("%d", &b);

    printf("le produit est: %d", mult(a, b));

    return 0;
}