#include <stdio.h>

int main() {
    int n, min=0;
    
    printf("Donner le nombre des éléments du tableau: ");
    scanf("%d", &n);
    
    int t[n];

    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (t[i] < min);
            min = t[i];
    }
    printf("Le minimum est: %d", min);

    return 0;
}
