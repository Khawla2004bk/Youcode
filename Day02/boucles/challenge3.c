#include <stdio.h>

int main() {
    int n, p=0;
    
    printf("Donner un nombre: ");
    scanf("%d", &n);
    
    for (int i = 2; i < n; i++) {
        p=1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                p=0;
                break;
            }
        }
        if(p)
            printf("%d Nombre Premier\n", i);
        else
            printf("%d nombre non premier\n", i);
    }
    
    return 0;
}
