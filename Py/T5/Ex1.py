''' definimos una funcion de la forma 
λb.λh.(b * h) / 2
la cual se usa para cacular el área de ltriangulo
'''

a = lambda b, h: (h * b) / 2

# le pedimos los datos al usuario de la base y de la altura
Base = float(input("Cuanto vale la base? "))
Altura = float(input("Cuanto vale la altura? "))
#imprimimos el valor del area llamando a nuestra funcion (imprimimos tambien la altura y la base nomás para que quede bonito)
print("El triangulo con base {} y altura {} tiene un area de ".format(Base, Altura) + str(a(Base, Altura)))
