#include <stdio.h>
#include <math.h>
#include "Pars.h"

int main() {
    int N;
    float d, theta, r;
    printf("Lados del polígono:\t");
    scanf("%d", &N);
    printf("Longitud de cada lado del polígono:\t");
    scanf("%f", &d);
    theta = 2 * M_PI / N;
    r = d / (2 * sin(theta / 2));
    printf("Las coordenadas (x, y) de los vértices del polígono son:\n");
    for (int i = 0; i < N; i++) {
        float x = r * cos(i * theta);
        float y = r * sin(i * theta);
        printf("P%d: (%.2f, %.2f)\n", i + 1, x, y);
    }
    return 0;
}
