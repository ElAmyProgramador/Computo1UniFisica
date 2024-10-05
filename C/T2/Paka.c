#include <stdio.h>
#include <math.h>
#include "Pars.h"

int main() {
    float a, b, c, x_1, x_2, d, n, r, PA;
    printf("Valor de a:\t");
    scanf("%f",&a);
    printf("Valor de b:\t");
    scanf("%f",&b);
    printf("Valor de c:\t");
    scanf("%f",&c);
    PA = FPA(a, b, c);
    if (PA < 0){
        d = fabs(PA);
        n = InvAditivo(b) / (2 * a);
        r = sqrt(d) / (2 * a);
        printf("La respuesta x_ 1 = %f + %fi, x2 = %f - %fi\n", n, r, n, r);
    } else {
        x_1 = (Suma(InvAditivo(b), PA)) / (2 * a);
        x_2 = (Resta(InvAditivo(b), PA)) / (2 * a);
        printf("x_1 = %f, x_2 = %f", x_1, x_2);
    }
    return 0;
}
