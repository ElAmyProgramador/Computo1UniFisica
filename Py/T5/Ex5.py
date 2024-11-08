# a pipo le gusta la pipaaaaaa :O

#importamos el reduce para escribir menos :v
from functools import reduce # no importamso todo porque a la maestra Dianita le da migraña

# La lista de Pipo ayudante de Gaston :v, aunque sea gastos lo pondre como Gastos para mantener mi estilo para nombrar variables (Pascal)
Gastos = [12689.00, 8500.00, 9050.05, 6988.12, 10056.80, 7756.60, 11235.12, 9966.88, 11545.52, 12568.20, 10630.30, 11364.01, 8995.45, 7441.15, 13054.90]

# sacamos el promedio con una funcion iterativa sobre una lista y lo dividimos entre la cantidad de elementos que tiene
Promedio = reduce(lambda Acumulativa, x: Acumulativa + x, Gastos) / len(Gastos)

# la lista de los gastos dividido en menores, medios y altos con una funcion de filtrado
Bajo = filter(lambda x: 0 < x < 8000, Gastos)
Medio = filter(lambda x: 8000 < x < 10000, Gastos)
Alto = filter(lambda x: 10000 < x, Gastos)

# imprimimos todo preferentemente con un formato de lista
print("La lista de los gastos bajos es: " + str(list(Bajo)))
print("La lista de los gastos medios es: " + str(list(Medio)))
print("La lista de los gastos altos es: " + str(list(Alto)))
# imprimimos toda esta wea del promedio
print("""El promedio de tus gastos es de {} (redondeando: {}) \n
El mes más costoso (creo está en meses) te costó {} y está en el índice {}""".format(
    # lo pongo de esta forma para evitar ver muchos parentesis en una sola linea y para facilitar la legibilidad
    Promedio,
    round(Promedio),
    max(Gastos),
    Gastos.index(max(Gastos))
    )
)
# y ya ta, ahi le pasan la factura a Pipo :p
