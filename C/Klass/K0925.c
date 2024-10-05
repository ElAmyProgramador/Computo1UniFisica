#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    /*
    int r, c, m[2][2] = {
        {1, 2},
        {3, 4}
    };
    for(r = 0; r < 2; r++) {
        for(c = 0; c < 2; c++) {
            printf("%d\t", m[r][c]);
        }
        printf("\n");
    }
    */
    // int M_2[3][3], r, c; for(r = 0; r < 3; r++) {for(c = 0; c < 3; c++) {if(r == c) {M_2[r][c] = 1;} else {M_2[r][c] = 0;}} printf("%d\t", M_2[r][c]);}
    int M_nt[n][n], n;
    printf("Cuanto vale n?\t"); scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            M_nt[i][j] = rand()%11;
            printf("%d\n", M_nt[i][j]);
        }
        printf("\n");
    }
    printf("Transpuesta:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            // y volaaa
        }
    }
    return 0;
}
