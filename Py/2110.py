# la neta ni se que estamos haciendo, llegue tarde D:

# funcion para sacar cosiente
def Cosiente(a, b):
    return a / b

# variables que ni se que son (prefiero Pascal aunque sean de solo una letra)
v = 5
dt = 0.5
tt = 10
n = Cosiente(tt, dt)
n = int(n)

# funcion que solo saca el producto entre 3 numeros llamada h porque es la telca de en medio de mi teclado :v
h = lambda a, b, c: a * b * c

# el for que no le sale a gerardo y no me acuerdo como se usa xD
for i in range(n + 1): # <- jaja esta bien deforme el wey :p
    x = h(v, i, dt)
    print(x)
