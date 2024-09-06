#include <stdio.h>

int main() {
    char chaine[100];
    int j = 0;

    printf("Entrer la chaine de caractère:\n\t");
    scanf("%[^\n]", chaine);
    getchar();
    
    for (int i = 0; i < 100; i++) {
        if (chaine[i] == '\0')
            break;
            
        else
            j++;
    }
    printf("La longueur de cette chaine est: %d", j);
}