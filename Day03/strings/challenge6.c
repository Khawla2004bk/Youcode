#include <stdio.h>
#include <string.h>

int main() {
    char str[50], c;
    int cnt=0;

    printf("Entrer une chaîne de caractères:\n\t");
    scanf("%[^\n]", str);
    getchar();

    printf("Entrer un caractère: ");
    scanf("%c", c);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c)
            cnt++;
    }
    printf("Le nombre d'occurence de ce caractère est: %d", cnt);

    return 0;
}