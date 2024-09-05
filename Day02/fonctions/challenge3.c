#include <stdio.h>

int max(int a, int b){
    int max;

    if(a > b)
        max = a;
    else 
        max = b;

    return max;
}
int main() {
    int a, b;

    printf("Entrez le nombre : ");
    scanf("%d", &a);

    printf("Entrez le nombre : ");
    scanf("%d", &b);

    printf("Le max est %d", max(a, b));

    return 0;
}