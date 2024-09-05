#include <stdio.h>
#include <string.h>

void inverse(char c[]) {
    int i = 0, fin = strlen(c) - 1;
    char tmp;

    while (i < fin) {
        tmp = c[i];
        c[i] = c[fin];
        c[fin] = tmp;
        i++;
        fin--;
    }
}

int main() {
    char c[100];

    printf("Entrez la chaine de caractères: ");
    scanf("%[^\n]", c);

    if (strlen(c) > 0 && c[strlen(c) - 1] == '\n') {
        c[strlen(c) - 1] = '\0';
    }

    inverse(c);

    printf("Chaine inversée: %s\n", c);

    return 0;
}
