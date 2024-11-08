# iniciamos la lista que se nos pide
Lst = [365, 30, 7, 1]

# pedimos el numero que quiere pasar
n = int(input("Introduce un numero a convertir: "))

# funciones lambda para mantener un paradigma declarativo y funcional
Div = lambda n, x : n // x
Mod = lambda x, y : x % y

# generamos variables con los valores del modulo conforme a cada paso
M1 = Mod(n, Lst[0])
M2 = Mod(M1, Lst[1])
M3 = Mod(M2, Lst[2])

#imprimimos esta wea
print("{} dias equivalen a {} años, {} meses, {} semanas, {} dias".format(
    n, Div(n, Lst[0]), Div(M1, Lst[1]), Div(M2, Lst[2]), Div(M3, Lst[3])
    )
)
