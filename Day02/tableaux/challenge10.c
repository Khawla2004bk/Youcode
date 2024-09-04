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
    
    printf("\nEntrer l'élément que vous voulez remplacer: ");
    scanf("%d", &nb);
    printf("Quelle est la nouvelle valeur: ");
    scanf("%d", &nb2);
    
    for (int i = 0; i < n; i++) {
        if (t[i] == nb) {
            t[i] = nb2;
        }
    }
    printf("le tableau avec l'élément remplacé:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", t[i]);
    }

    return 0;
}
