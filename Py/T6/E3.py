# importamos randint de random
from random import randint

# funcion para incrementar un numero a su sucesor
Add1 = lambda x : x + 1

# generamos el numero aleatorio
n = randint(0, 100)

# variable para contar los errores
Intentos = 0

# bucle while, está en true ya que se romperá por el codigo dentro de este
while (True):
    # imprimimos la cantidad de intentos restantes que tiene el usuario
    print("Tienes {} intentos restantes".format(5 - Intentos))
    # se le pide al usuario un numero especificando el rango y tipo, de igual manera lo convierte a entero
    Entrada = int(input("Digita un número (entero positivo i.e 0 - 100): "))
    # in friego de ifs y elifs para que funke esta wea por medio de multiples validaciones
    if (Entrada < 0):
        # en caso de que la entrada haya sido menor a 0:
        print("No es un número negativo ._.")
        Intentos = Add1(Intentos)
    elif (Entrada > 100):
        # en caso de que la entrada haya sido mayor a 100
        print("Es un número menor a 100 ._.")
        Intentos = Add1(Intentos)
    # si esta en el rango:
    else:
        # si la entrada es igual a n:
        if (Entrada == n):
            print("Wenas chavón, ya acabaste en {} intentos :D".format(Intentos))
            break
        #en caso de que sea menor
        elif (Entrada < n):
            print("Deberias intentarlo con un número mayor")
            Intentos = Add1(Intentos)
        # en caso de ser menor
        elif (Entrada > n):
            print("Deberias intentarlo con un número menor")
            Intentos = Add1(Intentos)
        # en caso de tener 5 intentos fallidos:
        if (Intentos == 5):
            print("Como que deberías dedicarte a otra cosa (bromis)")
            break

