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
    
    for (int i = 1; i < n; i++) {
        int tmp = t[i];
        int j = i - 1;
        while(j >= 0 && t[j] > tmp) {
            t[j+1] = t[j];
            j--;
            }
        t[j+1] = tmp;
        }
    
    printf("Le tableau après le tri est:\n\t");
    for (int i = 0; i < n; i++) {
         printf("%d | ", t[i]);
    }

    return 0;
}