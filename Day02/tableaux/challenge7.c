#include <stdio.h>

int main() {
    int n;
    
    printf("Donner le nombre des éléments du tableau: ");
    scanf("%d", &n);
    
    int t[n];

    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t[i]);
    }
    printf("votre tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", t[i]);
    }
    
    int t2[n];
    for (int i = 0; i < n ; i++) {
        t2[i] = t[i];
    }
    printf("\nLe tableau copié:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", t2[i]);
    }

    return 0;
}
