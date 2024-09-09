#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int Suma(unsigned int a, unsigned int b) {
    return a + b;
}

int main() {
    srand(time(NULL));
    unsigned int m = 0;
    short d1, d2;
    float Probabilidad;
    for (int i = 1; i <= 1000; i++) {
        d1 = Suma(rand() % 6, 1);
        d2 = Suma(rand() % 6, 1);
        if (Suma(d1, d2) == 7 || Suma(d1, d2) == 11) {
            m += 1;
        }
    }
    Probabilidad = ((float)m / 1000);
    printf("Probabilidad (7, 11) es: %.4f%%\n", (Probabilidad * 100));
    return 0;
}
