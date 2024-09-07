#include <stdio.h>
#include <string.h>

int main() {
    int j, j1, m, a;
    int m31[] = {1, 3, 5, 7, 8, 10, 12};
    int m30[] = {4, 6, 9, 11};


    printf("Entrer le jour: ");
    scanf("%d", &j);

    printf("Entrer le mois: ");
    scanf("%d", &m);

    printf("Entrer l'année: ");
    scanf("%d", &a);

    if (m == 2) {
        if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
            if (j > 29) {
                printf("Date invalide\n");
            }
            else if (j == 29) {
                j = 1;
                m = 3;
                printf("La date est : %d/ %d / %d", j, m, a);
            }

            else 
                j++;
        }

        else {
            if (j > 28) {
                printf("Date invalide");
            }
            else if (j == 28) {
                j = 1;
                m = 3;
                printf("La date est : %d/ %d / %d", j, m, a);
            }

            else
                j++;
        }
            
    }
    
    if (m > 12 || m < 1) {
        printf("Date invalide");
    }

    else {
        for (int i = 0; i < 7; i++) {
            if (m31[i] = m) {
                if (j > 31)
                    printf("Date invalide");
                else if (j == 31) {
                    j = 1;
                    if (m == 12) {
                        m = 1;
                        a++;
                    }

                    else
                        m++;
                }
                else 
                    j++;
            }
            else if (m30[i] = m) {
                if (j > 30)
                    printf("Date invalide");
                else if (j == 30) {
                    j = 1;
                    m++;
                }
                else
                    j++;
            }
                else
                    printf("mois invalide\n");
        }
        printf("La date est : %d/ %d / %d", j, m, a);
    }

    return 0;
}