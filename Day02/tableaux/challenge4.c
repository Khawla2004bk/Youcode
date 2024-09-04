#include <stdio.h>

int main() {
    int n, max=0;
    
    printf("Donner le nombre des éléments du tableau: ");
    scanf("%d", &n);
    
    int t[n];

    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (t[i] > max)
            max = t[i];
    }
    printf("Le maximum est: %d", max);

    return 0;
}
