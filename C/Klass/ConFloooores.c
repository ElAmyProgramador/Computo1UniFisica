#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x;
    srand(time(0));
    for (int i = 0; i < 100; i++) {
        x = rand() % 6 + 1;
        if (x == 3) {
            printf("%d en %d\n", i + 1, x);
        }
    }
    return 0;
}
