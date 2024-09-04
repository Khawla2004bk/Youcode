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
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += t[i];
    }
    
    printf("\nLa moyenne de votre tableau est: %d", s/n);
    
    return 0;
}
