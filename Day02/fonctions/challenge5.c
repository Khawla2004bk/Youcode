#include <stdio.h>

int fact(int a) {
    int f = 1;

    for (int i = 1; i <= a; i++) {
        f *= i;
    }

    return f;
}

int main() {
    int n;

    printf("Donner un nombre: ");
    scanf("%d", &n);

    printf("Le factoriel est: %d", fact(n));
}