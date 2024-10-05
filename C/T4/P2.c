/*
 * autor: E. Alexeiv Rosales Guillen
 * correo: da4amy@ciencias.unam.mx
 *
 * Problema 2:
 *
 * Elabora un programa que llene un arreglo de 10 entradas, dadas por números aleatorios enteros en el intervalo [0, 20], y reporte la posición de TODAS las entradas correspondientes al máximo y mínimo. Sugerencia: Una vez encontrado los valores máximo y mínimo, revisa de nuevo el arreglo (con otro for) e identifica los elementos y sus posiciones cuyo valor es igual al máximo, o al mínimo.
*/

// importacion de las librerias necesarias
#include <stdio.h> // libreria para la entrada y salida de datos a través del nucleo
#include <stdlib.h> // libreria con funciones extra
#include <time.h> // libreria para acceder a la hora del sistema a través del hardware o el nucleo

// este programa es similar al que hicimos el lunes (creo fue ese dia)

int main() {
    // inicializar la semilla para los numeros aleatorios
    srand(time(NULL)); // la semilla se evalua como la hora actual
    /* se crea un arreglo con 10 elementos, cada elemento guarda valores de -2^7 a 2^7 - 1, esto para ahorrar memoria con variables de 8 bits
     * variables de limte, se incicializa el maximo en el valor 0 para evitar estar en un pasible minimo
     * el valor minimo se incicializa en 20 para que todo valor maximo (20) sea igual o menor
    */
    short Arr[10], Max = 0, Min = 20;
    // bucle que llenara el arreglo
    for (int i = 0; i < (10 + 1); i++) {
        Arr[i] = rand()%(20 + 1); // al i-ésimo valor del arreglo se llenara con un numero rando del 0 al 20 -1, para evitar esto se le sumara un 1 al limite (solo con el afan de mantener mas claro el codigo en vez de poer el 21)
        // sentencia logica para evaluar si el i-ésimo valor del vector es mayor a nuestro maximo
        if (Arr[i] > Max) {
            Max = Arr[i]; // en dicho caso se guardará ese valor en nuestro limite
        }
        // la misma webada pero con el valor minimo
        if (Arr[i] < Min) {
            Min = Arr[i];
        }
        printf("%d -> %d\n", i, Arr[i]); // imprimimos con cada iteracion el valor asciado a cada elemento del vector
    }
    printf("Maximo: %d; Minimo: %d\n", Max, Min); // imprimimos los valores maximos y minimos
    // imprimimos con un for los maximos y su posicion en el vector
    printf("Maximos en:\n");
    for (int i = 0; i < (10 + 1); i++) {
        if (Arr[i] == Max) {
            printf("Arr[%d] -> %d\n", i, Arr[i]);
        }
    }
    // hacemos lo mismo pero con los minimos
    printf("Minimos en:\n");
    for (int i = 0; i < (10 + 1); i++) {
        if (Arr[i] == Min) {
            printf("Arr[%d] -> %d\n", i, Arr[i]);
        }
    }
    // retorno 0 para debuggear
    return 0;
}
