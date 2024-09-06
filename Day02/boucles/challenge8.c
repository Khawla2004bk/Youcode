#include <stdio.h>

int main() {
    int i = 0, n, nb, end, mil, rslt;

    printf("Donner la taille du tableau: ");
    scanf("%d", &n);

    end = n - 1;
    int T[n];

    for (i = 0; i < n; i++) {
        printf("Entrer la valeur %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Entrer la valeur à rechercher: ");
    scanf("%d", &nb);

    while (i <= end) {
        mil = (i + end) / 2;
        if (T[mil] == nb) {
            nb = mil;
            break;
        }

        else if (T[mil] < nb)
            i = mil + 1;

        else
            end = mil - 1;
    }

    if (nb != -1)
        printf("valeur trouvée");
    else
        printf("valeur non trouvée");

    return 0;
}