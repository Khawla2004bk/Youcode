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
    
    for (int i = 0; i < n; i++) {
        printf("La valeur %d: \n", i+1);
    }

    return 0;
}
