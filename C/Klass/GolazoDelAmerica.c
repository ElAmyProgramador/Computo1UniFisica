#include <stdio.h>
#include <math.h>

int main() {
    float x, y, v, ang, vx, vy, dt, t, g, pi, tmax;
    int i, n;
    t = 0;
    v = 5;
    ang = 30;
    g = 9.81;
    pi = 3.1416;
    printf("Proyectil lanzado con velocidad %f m/s a %f grados\n", v, ang);
    ang = ang*pi/180;
    vx = v*cos(ang);
    vy = v*sin(ang);
    tmax = 2*vy/g;
    printf("\nEl tiempo total de vuelo es %f s\n", tmax);
    printf("\nIngresa el valor del intervalo de tiempo dt:\n", tmax);
    scanf("%f", &dt);
    printf("\nCalcularemos %d posiciones (x, y) m\n", n);
    for(t=0; t<=tmax; t+=dt){
        x = vx*t;
        y = vy*t-0.5*g*t*t;
        printf("%f, %f\n", x, y);
    }
    return 0;
}
