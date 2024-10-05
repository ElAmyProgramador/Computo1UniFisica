#include <stdio.h>

int main() {
    int a, b;
    b = 0;
    a = 2 * b;
    printf("Si b = %d, entonces a = %d\n", b, a);
    b = 5;
    a = 2 * b;
    printf("Si b = %d, entonces a = %d\n", b, a);
    b = -10;
    a = 2 * b;
    printf("Si b = %d, entonces a = %d\n", b, a);
    return 0;
}
