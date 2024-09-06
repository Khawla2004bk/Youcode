#include <stdio.h>

int fibonacci(int n) {

    if (n == 0 || n == 1) {
        return n;
    }
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}


int main() {
    int n, cnt=0;

    printf("Entrer le nombre de termes du suite: ");
    scanf("%d", &n);

    printf("Les %d premiers termes de la suite de Fibonacci sont:\n\t", n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d | ", fibonacci(cnt));
        cnt++;
    }

    return 0;
}