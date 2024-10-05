/*
 * autor: E. Alexeiv Rosales Guillen
 * correo: da4amy@ciencias.unam.mx
 *
 * Problema 1:
 *
 * La sucesión o serie de Fibonacci es la siguiente sucesión de números naturales:
 * F = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, ...}
 * La sucesión comienza con los números 0 y 1, y a partir de estos, cada término es la suma de los dos anteriores. Utilizando un arreglo unidimensional elabora un programa que muestre los primeros N términos de la serie, N es solicitado al usuario. Considera que el usuario siempre dar ́a n > 2. Adicionalmente, haz que el programa le señale al usuario un elemento aleatorio F[i] de la lista generada así como su posición i.
*/

// importacion de las librerias necesarias
#include <stdio.h> // libreria para la entrada y salida de datos a través del nucleo
#include <stdlib.h> // libreria con funciones extra
#include <time.h> // libreria para acceder a la hora del sistema a través del hardware o el nucleo

// este problema es muy comun de realizar con bucles while, pero para hacerlo mas interesante usare recursividad para generar los elementos del vector, aunque no sea lo mas eficiente como utilizar memoizacion o al propio vector para generar el elemento siguiente del vector


// funcion suma para la suma de dos numeros, aunque no sea necesaria es para mantener una programacion mas modular
long int Suma(long int a, long int b) {
    return (a + b);
}

/* funcion de fibonacci recursiva
 * Al utilizar solo numeros naturales, es decir, solo numeros mayores a 0, utilizaremos el tipo unsigned long int que va desde los valores del 0 hasta el 2^{33}, por lo que nuestra rango contiene a todos los numeros enteros positivos (consideraremos hasta este rango como todos los valores en los numeros naturales)
 * a la funcion se el define como la suma de los dos anteriores para obtener ese valor, es decir, como funcion la representamos como f(n) = (n - 1) + (n - 2)
 * como funcion recursiva podemos dar los siguientes casos de n
 * fib(n) = {
 * si n = 0 => 0
 * si n = 1 => 1
 * si n > 1 => fib(n - 1) + fb(n - 2)
 * }
 * Por lo que para una valor n > 2 la funcion sería f(n) = f(n - 1) + f(n - 2), es decir, una suma de numeros de fibonacci
*/

// definimos la funcion de Fib para encontrar el n-ésimo valor
unsigned long int Fib(int n) {
    // como primer caso base si n es un 0 entonces retornara el 0
    if (n == 0) {
        return 0;
     } else if (n == 1) { // como segundo caso base retornra el 1 cuando n = 1
         return 1;
    } else {
        // en caso de ser un numero mayor a 1, retornara la suma del anterior y el anterior a ese
        return Suma(Fib(n - 1), Fib(n - 2));
    }
}

//funcion main
int main() {
    // inicializar la semilla para los numeros aleatorios
    srand(time(NULL)); // la semilla se evalua como la hora actual
    int n; // variable de n para calcular el valor hasta ese valor n con un espacio de 16 bits
    printf("Ingerse valor de n (mayor a 2)\t"); // indicacion de lo que se requiere que el usuario haga
    scanf("%d", &n); // guardar el valor ingesado por el usuario en la variable n
    /* arreglo de tamaño definido de acuerdo a la cantidad de n
     * la variable es de tipo unsined long int debido al valor dentro del vector, ya que el resultados en la posicion n es varias veces mas grande que el propio n y solo requeriremos de valores naturales (que definimos anteriormente como los numeros enteros positivos)
    */
    unsigned long int Arr[n];
    // condicional para evitar fallos y mantener un paradigma lógico
    if (n < 2) {
        // impresion en caso de que n sea menor a 2
        printf("No se valen valores menores a 2\n");
    } else {
        // en caso de no ser el caso llamará al n-ésimo valor del arreglo se procede a llenar el arreglo  e imprimir los n anteriores a n
        for (int i = 0; i < n; i++) {
            Arr[i] = Fib(i); // se guarda el valor de Fib(i) en la posicion i de nuestro arreglo
            printf("%d\n", Arr[i]); // lo imprimimos para no tener que iterar nuevamente en el arreglo y añadir mas instrucciones de las que el programa ya hace
        }
        printf("n aleatoria de la sucesion: %d\n", Arr[rand()%(n--)]); // impresion de una n aleatoria dentro del arreglo, se usa a n como limite para no acceder a un valor inexistente y se le resta 1 por que el indece superior es (n - 1)
    }
    //retorno de 0 para debuggear
    return 0;
}
