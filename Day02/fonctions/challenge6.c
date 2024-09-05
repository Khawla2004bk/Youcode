#include <stdio.h>

int fibonacci(int n) {

    if (n == 0)
        return 0;
    
    else if (n == 1)
        return 1;
    
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Entrez le terme: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Le terme demandé est %d\n", fibonacci(n));

    else
        printf("Erreur: L'indice doit être un entier positif.\n");
    
    return 0;
}
