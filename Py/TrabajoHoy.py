Doblar = lambda x: x + x
Cosiente = lambda x, y: x / y
Add = 0

for i in range(1, 6):
    Add += Doblar(i) - 1
print("El resultado es: "+ str(Add))

for i in range(1, 10000):
    add = Cosiente(1, 2**i)
print("El resultado es: " + str(add))
