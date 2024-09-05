#include <stdio.h>

int main() {
    int nb, n = 0, s = 0;

    printf("Donner le nombre des élèments du série\n");
    
    
    while(1) {
        printf("Entrer une valeur : ");
        scanf("%d", &nb);

        if (nb == 0)
            break;
        
        else {
            s += nb;
            n++;
        }
    }

    if (n > 0) {
        float m = (float) s / n;
        printf("La moyenne est: %.2f", m);
    }
    
    return 0;
}
