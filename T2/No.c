//Elabora un programa que genere y muestre una lista de los primeros N pares y su suma total.

#include <stdio.h>
#include "Pars.h"

int main() {
    int n = 20, aux = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d -> %d\n", i, i*2);
        aux = Suma(aux, i*2);
    }
    printf("La suma de los primeros %d pares es: %d\n", n, aux);
    return 0;
}
