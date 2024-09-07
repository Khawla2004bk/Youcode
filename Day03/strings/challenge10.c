#include <stdio.h>
#include <string.h>

int main() {
    char str[50], sstr[50];

    printf("Entrer la chaîne de caractères principale:\n\t");
    scanf("%[^\n]", str);
    getchar();

    printf("Entrer une sous-chaîne de caractères:\n\t");
    scanf("%[^\n]", sstr);
    getchar();

    if (strstr(str, sstr))
        printf("la sous-chaîne est trouvée.");

    return 0;
}