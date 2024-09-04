#include <stdio.h>

int main() {
    int n, fact;
    
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
    
    int i=0, fin=n-1, tmp;
    while (i < fin) {
        tmp = t[fin];
        t[fin] = t[i];
        t[i] = tmp;
        i++;
        fin--;
    }
    printf("\nLe tableau inversé:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", t[i]);
    }

    return 0;
}
