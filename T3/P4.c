#include <stdio.h>

int main() {
    int n, z = 2, ContadorPrimos = 0;
    printf("¿Cuántos números primos deseas ver?\t");
    scanf("%d", &n);
    while (ContadorPrimos < n) {
        int p = 1;
        for (int i = 2; i * i <= z; i++) {
            if (z % i == 0) {
                p = 0;
                break;
            }
        } if (p == 1) {
            printf("%d es un numero primo\n", z);
            ContadorPrimos++;
        }
        z++;
    }
    return 0;
}
