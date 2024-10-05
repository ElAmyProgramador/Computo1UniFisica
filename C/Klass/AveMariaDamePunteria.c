#include <stdio.h>

int Suma(int a, int b) {
    return (a + b);
}
int main() {
    int n, Total, i;
    printf("¿Cuantos numeros quieres sumar?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
         Total = Suma(Total, i);
    }
    printf("El resultado es: %d\n", Total);
    return 0;
}
