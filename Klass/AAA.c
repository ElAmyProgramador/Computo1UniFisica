#include <stdio.h>
#include <math.h>

int main() {
    int v, i, dt;
    float x, ang, y, vx, vy, g = 9.81, tmax, t;
    v = 5;
    t = 0;
    ang = 30 * M_PI / 180;
    vx = v * cos(ang); vy = v * sin(ang);
    tmax = 2*vy / g;
    dt = tmax / 100;
    for (i = 1; i <= 100; i++) {
        x = vx * t;
        y = vy * t - 0.5 * g *t*t;
        printf("%f, %d\n", x, t);
        t = t + dt;
    }
    return 0;
}
