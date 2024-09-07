#include <stdio.h>
#include <string.h>

int main() {
    char str[50], str1[50], S[150];

    printf("Entrer le premier string:\n\t");
    scanf("%[^\n]", str);
    getchar();

    printf("Entrer le deuxième string:\n\t");
    scanf("%[^\n]", str1);
    getchar();

    strcat(S, str);
    strcat(S, " ");
    strcat(S, str1);

    printf("Le string final est: %s", S);
    

}