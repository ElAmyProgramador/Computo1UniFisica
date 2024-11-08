# aqui esta el proyecto de fin de semestre

# las librerias necesarias
import numpy as np
import matplotlib.pyplot as plt
import sympy as sp
from vpython import *
# funciones
div = lambda x, y : x / y
succ = lambda x : x + 1

def Graficar(y, x, Titulo, Datos):
    #aqui como se graficará
    plt.style.use("seaborn-poster")
    plt.ylabel(str(y))
    plt.xlabel(str(x))
    plt.title(str(Titulo))
    plt.plot(Datos)
    plt.show()

# constantes
h = div(1, 100)

# variables
t = range(1, succ(20))

# main

#graficación
Graficar("Ordenadas", "Abscisas", "Prueba", t)

