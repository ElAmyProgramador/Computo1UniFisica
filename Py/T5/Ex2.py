# programa del factorial
# como en el anterior lo hice con recursividad, este tambíen porque es un ejemplo clásico

# definimos la funcion que toma como parametro un valor n
def Fact(n):
    if (n == 0):
        # como cas obase tenemos que si n es 0, entonces 0! es 1
        return 1
    else:
        # en caso contrario a esa n la haremos iterar sobre si misma hasta que se multiplique por un 1 la n anterior a ea hasta llegar a n
        return n * Fact(n - 1)

# pedimos el valor al usuario en donde n sea mayor a 2 amablemente
n = int(input("De que n (mayor a 2) quieres saber el factorial? "))

if (n <= 2):
    # si n es menor o igual a 2 le indicamos su error cortesmente
    print("Tas bien animal, te dije que mayor a 2 xD")
else:
    # en caso de que no solo imprimimos el factorial de la n que nos pidio
    print("El resultado de {}! es: ".format(n) + str(Fact(n)))
