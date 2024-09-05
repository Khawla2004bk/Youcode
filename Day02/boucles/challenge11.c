#include <stdio.h>

int main() {
    int i = 0, nb, n = 0, s = 0;

    printf("Donner le nombre des élèments du série:\n");
    
    
    while(1) {
        if (nb == 0)
            break;
        
        else {
            printf("Entrer la valeur %d: ", i+1);
            scanf("%d", &nb);
            s += nb;
            n++;
            i++;
        }
    }
    printf("La moyenne est: %d", s/n);
    
    return 0;
}
