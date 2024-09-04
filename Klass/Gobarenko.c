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
    n = 10;
    dt = tmax/n;
    printf("\nCalcularemos %d posiciones (x, y) m\n", n);
    for(i=0; i<=n; i++){
        x = vx*t;
        y = vy*t-0.5*g*t*t;
        printf("%f, %f\n", x, y);
        t = t+dt;
    }
    return 0;
}
