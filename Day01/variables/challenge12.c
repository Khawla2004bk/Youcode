#include <stdio.h>

int main() {
    int n, u, rev = 0;

    printf("Entrer le nombre: ");
    scanf("%d", &n);
    
    u = n % 10;
    n /= 10;
    rev = rev * 10 + u;
    u = n % 10;
    n /= 10;
    rev = rev * 10 + u;
    u = n % 10;
    n /= 10;
    rev = rev * 10 + u;
    u = n % 10;
    n /= 10;
    rev = rev * 10 + u;
    
    printf("le nombre inversé est %d", rev);
    
    return 0;
}
