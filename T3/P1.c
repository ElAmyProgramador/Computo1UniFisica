#include <stdio.h>

int Cuadrar(int a) {
    return a * a;
}

int Sumando(int i) {
    return (3 * Cuadrar(i) + 1);
}

int main() {
    unsigned int n, Total = 0;
    printf("Cuanto vale n?\t");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Iteracion numero %d: 3(%d) + 1 es:\t %d\n", i, Cuadrar(i), Sumando(i));
        Total += Sumando(i);
    }
    printf("El total es: %d\n", Total);
    return 0;
}
