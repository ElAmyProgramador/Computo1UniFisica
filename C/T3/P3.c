#include <stdio.h>

int main() {
    unsigned int n;
    printf("Cuantos n?\t");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
