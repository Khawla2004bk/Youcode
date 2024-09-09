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
    
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (t[j] < t[min]) {
                min = j;
            }
        }
        int tmp = t[i];
        t[i] = t[min];
        t[min] = tmp;
    }
    
    printf("Le tableau après le tri est:\n\t");
    for (int i = 0; i < n; i++) {
         printf("%d | ", t[i]);
    }
    
    return 0;
}