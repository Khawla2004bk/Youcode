#include <stdio.h>

void triRapid(int t[], int first, int last) {
    
    if (first < last) {
        int piv = t[first];
        int i = first+1;
        int j = last;
        while (i <= j) {
            while (t[i] <= piv && i <= last)
                i++;
            while (t[j] > piv)
                j--;
            if (i < j) {
                int tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }
        }
        int tmp = t[first];
        t[first] = t[j];
        t[j] = tmp;
        
        triRapid(t, first, j-1);
        triRapid(t, j+1, last);
    }
}

int main() {
    int n;

    printf("Entrer la taille du tableau: ");
    scanf("%d", &n);
    int t[n];
    
    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d: ", i+1);
        scanf("%d", &t[i]);
    }
    
    triRapid(t, 0, n-1);
    
    printf("Le tableau après le tri est:\n\t");
    for (int i = 0; i < n; i++) {
         printf("%d | ", t[i]);
    }
    
    return 0;
}