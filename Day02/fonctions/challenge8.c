#include <stdio.h>

int parite(int n) {

    if (n % 2 == 0) 
        return 1;

    else
        return 0;

}

int main() {
    int n;

    printf("Donner le nombre: ");
    scanf("%d", &n);

    if (parite(n) == 1)
        printf("Ce nombre est pair");

    else
        printf("Ce nombre est impair");
    


}