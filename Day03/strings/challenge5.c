#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Entrer une chaîne de caractères:\n\t");
    scanf("%[^\n]", str);
    getchar();

    int prem = 0, dern = strlen(str) - 1;
    while (prem < dern) {
        char tmp = str[dern];
        str[dern] = str[prem];
        str[prem] = tmp;
        prem++;
        dern--;
    }

    printf("La chaîne de caractères inversée est:\n\t%s", str);

    return 0;
}