#include <stdio.h>

int main() {
    int n;
    
    printf("Entrer la taille du tableau: ");
    scanf("%d", &n);
    int t[n];
    
    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t[i]);
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (t[j] > t[j+1]) {
            int tmp = t[j];
            t[j] = t[j+1];
            t[j+1] = tmp;
            }
        }
    }
    
    printf("Le tableau après le tri est:\n\t");
    for (int i = 0; i < n; i++) {
         printf("%d | ", t[i]);
    }

    return 0;
}