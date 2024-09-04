#include <stdio.h>

int main() {
    int n, n1;
    
    printf("Donner le nombre des éléments du premier tableau: ");
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

    printf("\nDonner le nombre des éléments du deuxième tableau: ");
    scanf("%d", &n1);
    
    int t1[n1];
    for (int i = 0; i < n1; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t1[i]);
    }
    printf("votre tableau:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d | ", t1[i]);
    }
    
    int n2 = n + n1;
    int T[n2];
    for (int i = 0; i < n; i++) {
        T[i] = t[i];
    }
    
    int i, j;
    for(i = 0, j = n; j < n2 && i < n1; i++, j++) {
            T[j] = t1[i];
    }
    
    printf("\nLe tableau fusionné:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d | ", T[i]);
    }
    
    return 0;
}
