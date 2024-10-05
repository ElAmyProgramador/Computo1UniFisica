#include <stdio.h>
#include "Pars.h"

int main() {
    float M, V;
    printf("Cuanto vale la masa?\n");
    scanf("%f", &M);
    printf("Cuanto vale el volumen?\n");
    scanf("%f", &V);
    float Densidad = CalcDensidad(M, V);
    if (Densidad > 1.0) {
        printf("Se hunde\n");
    } else if (Densidad < 1.0) {
        printf("Flota\n");
    } else {
        printf("Aich no se\n");
    }
    return 0;
}
