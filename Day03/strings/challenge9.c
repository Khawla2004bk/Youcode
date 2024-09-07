#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Entrer une chaîne de caractères:\n\t");
    scanf("%[^\n]", str);
    getchar();

    printf("La chaîne de caractères sans espaces est:\n\t");
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            continue;
        else
            printf("%c", str[i]);
    }

    return 0;
}