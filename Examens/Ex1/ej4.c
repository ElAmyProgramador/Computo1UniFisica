#include <stdio.h>

int Suma(int a, int b) {
    return (a + b);
}

int main() {
    int n, aux = 1;
    printf("Cuanto vale n?\t");
    scanf("%d", &n);
    for (int i = 0; aux <= n; i++) {
        aux += i;
        printf("%d\n", aux);
    }
    return 0;
}
