#include <stdio.h>
#include <string.h>

int main() {
    char str[50], str1[50];

    printf("Entrer la première chaîne de caractères:\n\t");
    scanf("%[^\n]", str);
    getchar();

    printf("Entrer la deuxième chaîne de caractères:\n\t");
    scanf("%[^\n]", str1);
    getchar();

    if (strcmp(str, str1) == 0)
        printf("Les deux chaînes de caractères sont égales.");
    else
        printf("Les deux chaînes de caractères sont différentes.");
        
    return 0;
}