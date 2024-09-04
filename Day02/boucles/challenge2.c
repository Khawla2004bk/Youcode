#include <stdio.h>

int main() {
    int l;
    
    printf("Donner le nombre de ligne: ");
    scanf("%d", &l);
    
    for (int i = 1; i <= l; i++) {
        for (int j = i; j < l; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i*2-1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
