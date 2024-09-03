#include <stdio.h>
# include <math.h>
# define M_PI 3.14159265358979323846 

int main() {
    float r, V;

    printf("Entrer la valeur du rayon: ");
    scanf("%f", &r);
    
    V = (4/3 * M_PI * pow(r,3));
    
    printf("Le volume est: %.2f", V);
    
    return 0;
}
