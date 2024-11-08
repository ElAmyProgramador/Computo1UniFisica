# definimos las variables a y b, pedimos el valor al usuario (enteros)
a = int(input("Cual es el valor de a? "))
b = int(input("Cual es el valor de b? "))

# funcion para calcular el mcd, recibe 2 parametros de entrada que serán las variable que definimos
def Euclides(a, b):
    # retornamos los valores de la funcion con un operador ternario para escribir menos
    return a if (b == 0) else Euclides(b, a % b)

#imprimimos el resultado
print(Euclides(a, b))
