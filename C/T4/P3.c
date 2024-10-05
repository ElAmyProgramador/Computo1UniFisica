/*
 *  autor: E. Alexeiv Rosales Guillen
 * correo: da4amy@ciencias.unam.mx
 *
 * Problema 3:
 *
 * Elabora un programa que almacene, en un arreglo, una matriz triangular superior de N · N. Las entradas de la matriz serán números aleatorios enteros en el intervalo [0, 20] y la dimensión N es solicitada al usuario.
*/

// importacion de las librerias necesarias
#include <stdio.h> // libreria para la entrada y salida de datos a través del nucleo
#include <stdlib.h> // libreria con funciones extra
#include <time.h> // libreria para acceder a la hora del sistema a través del hardware o el nucleo

int main() {
    short n; // creamo una variable de tamaño de hasta 8 bits (seria muy sadista pedir una matriz de 10 x 10 para guardar una n no definida aún)
    // inicializar la semilla para los numeros aleatorios
    srand(time(NULL)); // la semilla se evalua como la hora actual
    printf("Cuanto vale n?\t"); // indicacion de lo que se requiere que el usuario haga
    scanf("%d", &n); // guardar el valor ingesado por el usuario en la variable n
    short Arr[n][n]; // matriz cuadrada de tamaño definido de acuerdo a la cantidad ingresada en n
    // bucle para recorrer las filas o eje x
    for (int i = 0; i < n; i++) {
        // bucle para recorrer las columnas o eje y
        for (int j = 0; j < n; j++) {
            /* condicional para poder insertar cierto valor en la matriz
             * definiremos a una matriz triangular superior como la matriz en donde todos los valores dentro de su mediana (cuando la posicion en m[i][j] son iguales) tiene valores diferentes a 0
             * todas la posiciones sobre la mediana tiene valores deferentes a 0
             * todas las posiciones bajo la mediana son 0
            */
            if (i >= i && j >= i) {
                // en caso de que i y j (x e y) sean iguales o mayores a i entonces se llenara con un numero aleatorio entre 0 a 20
                Arr[i][j] = rand()%(20 + 1);
            } else {
                // en caso de no ser asi se lenara con un 0
                Arr[i][j] = 0;
            }
            //se imprimen las pocisiones solo para corroborrar aunque no se nos pide eso, mi hermana dice que eso esta implicito pero no lo dice :(
            printf("Arr[%d][%d] = %d\t", i, j, Arr[i][j]);
        }
        //salto de linea para que se veo bonito
        printf("\n");
    }
    // retorno 0 para debuggear
    return 0;
}
