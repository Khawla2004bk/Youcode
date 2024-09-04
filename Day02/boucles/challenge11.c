#include <stdio.h>

int main() {
    int i, n, nb, s=0;

    printf("Donner le nombre des élèments du série: ");
    scanf("%d", &n);
    
    
    for (i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &nb);
        s += nb;
    }
    printf("La moyenne est: %d", s/n);
    
    return 0;
}
