''' problema de fibonacci
Como python es muy lento por ser interpretado, usaremos en vez de usar la forma recursiva, usaremos una 'memoizacion' algo 'primitiva'
'''
NF = [0, 1] #declaramos un vector con solo dos entradas, el 0 y 1 como casos base de Fib_1 = 0 y Fib_2 = 1
#definimos una funcion de Adicion de la forma λx.λy.x + y
Adicion = lambda x, y: x + y

# pedimos el valor de n
n = int(input("Que n quieres (mayor a 2)? "))

# la condicional para ver si saben leer
if (n <= 2):
    print("Dios creo la estupidez pensando en ti, te dije que mayor a 2 -_-")
else:
    ''' si saben leer pasara esto
    en si pusieron una n mayor a 2 se generara ahora si la sucesion con el for
    como ya definimos los valores 0 y 1, empezaremos i en 2 hasta la posición n - 1
    '''
    for i in range(2, n):
        # como fibonacci se define como el enesimo termino es la adicion del n - 2 y n - 1, solo los sumamos, es decir, a partir de la lista generamos los siguientes elementos de la lista usando a la lista misma; en realidad la memoizacion pide una funcion como argumento de la funcion, pero teniendo en cuenta que solo es para generar los casos base que ya se conocen en sus respectivas posiciones de lista, no es eficiente (al menos para una sucesion que se base en la funcion Adicion) que es lo que buscamos, además de que hacerlo de esta forma nos ahorra ciclos del procesador, tiempo y recursos
        NF.append(Adicion(NF[i - 2], NF[i - 1]))
    # fin del ciclo
    # imprimimos el n y su valor en la sucesion
    print("El {} elemento es ".format(n) + str(NF[n - 1]))
