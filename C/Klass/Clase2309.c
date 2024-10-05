#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //iniciar la semilla
    srand(time(0));
    // declarar variables enteras (aunque creo que todo puede caber en los short)
    int a[20], min = 20, max = 0;
    short imin = 0, imax = 0;
    //bucle for (debido a que i es muy peqeño para ahorrar recursos usamos short)
    for (short i = 0; i < 21; i++) {
        a[i] = rand()%21;
        if (a[i] < min) {
            min = a[i];
            imin = i;
        } if (a[i] > max) {
            max = a[i];
            imax = i;
        }
        printf("%d\n", a[i]);
    }
    return 0;
}
