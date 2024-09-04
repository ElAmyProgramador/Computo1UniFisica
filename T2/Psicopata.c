#include <stdio.h>
#include "Pars.h"

int main() {
    int i, n, aux = 1;
    printf("Hasta cuantos n?\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", aux);
        aux = Suma(aux, i);
    }
    return 0;
}
