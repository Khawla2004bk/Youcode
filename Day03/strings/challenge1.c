#include <stdio.h>

int main() {
    char chaine[100];

    printf("Entrer la chaine de caractère:\n\t");
    scanf("%[^\n]", chaine);
    getchar();
    
    printf("Votre chaine est: %s", chaine);

    return 0;
}