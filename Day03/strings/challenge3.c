#include <stdio.h>
#include <string.h>

int main() {
    char str[50], str1[50], S[150];

    printf("Entrer le premier string:\n\t");
    fgets(str, 50, stdin);

    printf("Entrer le deuxième string:\n\t");
    gets(str1);

    strcat(S, str);
    strcat(S, " ");
    strcat(S, str1);

    printf("le string final est: %s", S);
    

}