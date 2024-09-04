#include <stdio.h>

int main() {
    int n, nb;
    
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
    
    printf("\nEntrer l'élément que vous voulez cherchez: ");
    scanf("%d", &nb);
     int trouve = 0;
    for (int i = 0; i < n; i++) {
        if (nb == t[i]) {
            printf("Elémént trouvé");
            break;
            trouve = 1;
        }
    }
    if(trouve = 0)
        printf("Element introuvable");

    return 0;
}
