#include <stdio.h>

int min(int a, int b) {
    int min;

    if(a>b)
        min = b;
    else 
        min = a;

    return min;
}

int main() {
    int a, b;

    printf("Entrez le nombre : ");
    scanf("%d", &a);

    printf("Entrez le nombre : ");
    scanf("%d", &b);

    printf("Le minimum est %d", min(a, b));

    return 0;
}