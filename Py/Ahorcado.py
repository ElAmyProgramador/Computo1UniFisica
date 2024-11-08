Joss = "Barney"
JossL = list(Joss)
Cont = 0
# print(Joss)

''' separar palabras
for i, x in enumerate(JossL):
    print(x, i)
'''

# le metemos los guiones satanicos
Guiones = ['_' for i in JossL]
print(Guiones)

# los mismo pero con el join
PP = " ".join(Guiones)

print("Tienes 5 intentos")
while(JossL != Guiones):
    Letra = input("Letra: ")
    LetraEnc = False
    for x, y in enumerate(JossL):
        if (y == Letra):
            print("Está en {}".format(x + 1))
            Guiones[x] = Letra
            LetraEnc = True
    if not LetraEnc:
        Cont += 1
    if (Cont == 5):
        break
    print("Tienes {} intentos restantes".format(5 - Cont))
    PP = " ".join(Guiones)
    print(PP)

if (JossL == Guiones):
    print("Wena esa")
else:
    print("Vosotrois estáis muertos, jajaja, jajaja, jajaja")
