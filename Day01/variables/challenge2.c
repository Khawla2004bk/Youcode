#include <stdio.h>

int main() {
    float k, c;
    
    printf("Entrer la température en celcius: ");
    scanf("%f", &c);
    
    k = c + 273.15;
    
    printf("Cette température en kelvin est: %f", k);
    
    return 0;
}
