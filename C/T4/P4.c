/*
 *  autor: E. Alexeiv Rosales Guillen
 * correo: da4amy@ciencias.unam.mx
 *
 * Problema 4:
 *
 * Esta muy largo hasta para copiar y pegar xD
*/

// importacion de las librerias necesarias
#include <stdio.h> // libreria para la entrada y salida de datos a través del nucleo

// funcion para pedir los valores de una matriz cuadrada y no repetir codigo
void LlenarMatriz(short n, char Letra, int Arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Valor de %c[%d][%d]: ", Letra, i, j);
            scanf("%d", &Arr[i][j]);
            printf("\n");
        }
    }
}

// funcion para imprimir la matriz y no repetir codigo y hacer menos engorroso el leer el codigo
void ImprimirMatriz(short n, char Letra, int Arr[n][n]) {
    printf("Matriz %c:\n", Letra);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c[%d][%d]: %d\t", Letra, i, j, Arr[i][j]);
        }
        printf("\n");
    }
}

// funcion para calcular el producto entre 2 numeros, esto para mantener un paradigma mas funcional
int Producto(int a, int b) {
    return (a * b);
}

// funcion main
int main() {
    // en las instrucciones que no copié nos indica que sean 2 matrices A y B de dimensiones de 3 x 3, por tanto por matriz la resultante (C = AxB) es de 3 x 3
    int A[3][3], B[3][3], C[3][3];
    // llamamos a la funcion que pide valores para llenar la matriz para llenar ambas matrices como su nombre lo indica :v
    LlenarMatriz(3, 'A', A);
    LlenarMatriz(3, 'B', B);
    // recorremos las matrices (solo necesitamos las posicniones de i y j)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0; // esto por un error ante valores no definidos
            for (int k = 0; k < 3; k++) {
                // el valor de C[i][j] es la suma de 0  mas el producto de A[i][k] y B[k][j], los cuales cambian en cada iteración
                C[i][j] += Producto(A[i][k], B[k][j]);
            }
        }
    }
    // imprimimos la matriz asi bien cuqui (no escuchen al rubius de fondo para programar)
    ImprimirMatriz(3, 'C', C);
    // retorno 0 para debuggear
    return 0;
}
