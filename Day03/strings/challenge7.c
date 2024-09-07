#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];

    printf("Entrer  une chaîne de caractères:\n\t");
    scanf("%[^\n]", str);
    getchar();

    printf("La chaîne de caractères en majuscule est:\n\t");

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", toupper(str[i]));
    }

    return 0;
}