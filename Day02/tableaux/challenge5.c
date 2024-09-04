#include <stdio.h>

int main() {
    int n, fact;
    
    printf("Donner le nombre des éléments du tableau: ");
    scanf("%d", &n);
    printf("Donner le facteur de multiplication: ");
    scanf("%d", &fact);
    
    int t[n];
    int t2[n];
    
    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t[i]);
    }
    
    for (int i = 0; i < n; i++) {
        t2[i] = t[i] * fact;
    }
    printf("votre tableau est:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", t[i]);
    }
    printf("\nLe nouveau tableau est:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", t2[i]);
    }

    return 0;
}
