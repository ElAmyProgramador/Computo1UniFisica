PI = 3.14159
def VolSfe(r):
    a = 4/3
    return (a * PI * r**3)

r = int(input("Cuanto vale el radio"))

print("El area es: " + str(VolSfe(r)))
