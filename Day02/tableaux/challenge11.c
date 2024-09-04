#include <stdio.h>

int main() {
    int n, nb, nb2;
    
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
    
    printf("\nLes élèments paires:");
    for (int i = 0; i < n; i++) {
        if (t[i] % 2 == 0) {
            printf("%d, ", t[i]);
        }
    }
    

    return 0;
}
