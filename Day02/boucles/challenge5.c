#include <stdio.h>

int main() {
    int n, s=0;
    
    printf("Donner un nombre: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    printf("La somme jusqu'à %d est: %d", n, s);
    
    return 0;
}
