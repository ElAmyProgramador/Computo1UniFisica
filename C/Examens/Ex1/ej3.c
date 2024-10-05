#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Pollo, n = 0;
    srand(time(NULL));
    do {
        Pollo = rand()%6 + 1;
        printf("%d\n", Pollo);
        if(Pollo != 3) {
            n++;
        }
    } while (Pollo == 3);
    printf("%d intentos\n", n);
    return 0;
}
