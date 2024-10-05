//fichero con las funciones 
//fichero con funciones para no repetir codigo

float Suma(float a, float b) {
    return (a + b);
}

float Resta(float a, float b) {
    return (a - b);
}

int Sucesor(int a) {
    return (a++);
}

int Predecesor(int a) {
    return (a--);
}

float CalcDensidad(float M, float V) {
    return (M/V);
}

float FPA(float a, float b, float c) {
    b = (b * b);
    float ac = (a * c);
    return (Resta(b, (4 * ac)));
}

float InvAditivo(float a) {
    return (-a);
}

float ATriangulo(float b, float h) {
    return (b * h / 2);
}

float ACuadrado(float l) {
    return (l * l);
}

int Factorial(int n) {
    if (n == 0){
        return 1;
    } else {
        int b = (n * Factorial(n - 1));
        return b;
    }
}

float Min(float a, float b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

float Max(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

float Doblar(float a) {
    return (a * 2);
}

int Cuadrar(int a) {
    return (a * a);
}

int Exponente(int a, int b) {
    if (b == 2) {
        return Cuadrar(a);
    } else if (b == 0) {
        return 1;
    } else {
        return a * Exponente(a, b - 1);
    }
}

//funciones de arreglos

float Cabeza(int Array[]) {
    return Array[0];
}
