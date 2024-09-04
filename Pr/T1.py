x = float(input("Que raiz quieres?"))
b = x
i = 1
while b != (x/b):
    b_n = 1/2 * (b + (x/b))
    b = b_n
    print(b)

print("Valor: " + str(b))
