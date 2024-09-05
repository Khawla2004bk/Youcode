#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Entrer un nombre: ");
    scanf("%d", &a);

    printf("Entrer un nombre: ");
    scanf("%d", &b);

    printf("La somme est : %d", sum(a,b));

    return 0;
}