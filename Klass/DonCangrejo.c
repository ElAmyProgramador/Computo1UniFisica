// 08/19
#include <stdio.h>

float SArea(float b, float h) {
    return ((b*h) / 2);
}

int main() {
    float b, h;
    printf("Cuanto mide la base? ");
    scanf("%f", &b);
    printf("Cuanto mide la altura? ");
    scanf("%f", &h);
    printf("La base es: %f\n", SArea(b, h));
    return 0;
}
