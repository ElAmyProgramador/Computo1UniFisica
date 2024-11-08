# las librerias y funciones requeridas
from random import choice

# funciones propias utilizadas, son para evitar escribir tanto codigo
def Elegir(Lista):
    Elegido = choice(choice(Lista))
    LstElegido = list(Elegido)
    Guiones = ['_' for i in LstElegido]
    return Elegido, LstElegido, Guiones

def Llenar(Guionazo):
    PP = " ".join(Guionazo)
    print(PP)

def Alocar(El, Lst):
    Lst.append(El)

# Funciones lambda simples que usa le codigo
Add1 = lambda x: x + 1
Sum = lambda x, y: x + y

# aunque personalmente prefiero el paradigma funcional y declarativo, aqui no hay mucho qu hacer para eso, y siento que para algo tan simple, el POO tampoco tiene mucho sentido
# la lista de palabras
Palabras = [
    ['manzana', 'banana', 'pera', 'uvas', 'pera', 'naranja', 'toronja', 'piña', 'aguacate', 'granada'],
    ['rosa', 'buganvilla', 'nardo', 'alabastro', 'petunia', 'glicinia', 'romero', 'agapanto', 'culantrillo', 'aspidistra'],
    ['culebra', 'darshan', 'lobo', 'conejo', 'salamandra', 'raton', 'burro', 'gato', 'cocodrilo', 'tigre', 'oso'], # darshan es mi amigo xD
    ['alemania', 'afganistan', 'guatemala', 'chile', 'barzil', 'eslovaquia', 'lituania', 'kazajistan', 'mauritania', 'magyarorszag'],
    ['moscu', 'berlin', 'chihuahua', 'andarrubia', 'montserrat', 'volgogrado', 'hokkaido', 'peking', 'busan', 'a', 'Taumatawhakatangihangakoauauotamateapokaiwhenuakitanatahu', 'szekesfehervar', 'omsk'], # reza para que no te toque la ciudad neozelandesa xD
    ['monserrat', 'enrique', 'wrth', 'un', 'houtarou', 'irene', 'sebastian', 'darshan', 'samuel', 'aisa'], # aisa es el nombre de mi amiga, por eso lo pongo
    ['rosa', 'rojo', 'morado', 'azul', 'cyan', 'blanco', 'negro', 'gris', 'guinda', 'vino'],
    ['vinogradov', 'yakovliev', 'kurosch', 'sominskim', 'turing', 'sakharov', 'yo', 'peyrard', 'dauxois', 'milantiev', 'shmidt'],
    ['los padrinos magicos', 'bob esponja', 'pokemon', 'dragon ball', 'tuff puppy', 'los backyardigans', 'los looney toones', 'don gato y su pandilla', 'drake y josh', 'el pajaro loco'],
    ['cars 2', 'encanto', 'five nights at freddy\'s', 'jack y su corazon de cucu', 'el espantatiburones', 'shrek', 'la pasion de cristo', 'sing ven y canta', 'codigo  enigma', 'ga\'hoole']
]

# variables necesarias
Elec = True
Usadas = []
ContJG, ContJP = 0, 0

# ciclo while el cual dependera de Elec
while (Elec):
    # reiniciamos variables en caso de un nuevo juego
    Cont = 0
    Elegido, LstElegido, Guiones = Elegir(Palabras)
    print(Guiones)
    PP = ' '.join(Guiones)
    Usadas.clear()
    # aqui fue basicamente copiar codigo del ahorcado original xD
    while (LstElegido != Guiones):
        Letra = input("Letra: ")
        LetraEnc = False
        # un easter egg xD (mucho lore)
        if (Letra.lower() == "valeria"):
                print("Se fue con un ingeniero, no te deja ni en visto, le va bien en su vida y es feliz como una lombriz :'D (llora internamente) \nElla no se fijaría en un físico como tu :'D")
                break
        if (Letra in Usadas):
            print("Esa letra ya esta usada")
            Cont = Add1(Cont)
        else:
            pass
        for x, y in enumerate(LstElegido):
            if (y == Letra[0].lower()):
                print("La letra está en {}".format(x + 1))
                Guiones[x] = Letra
                LetraEnc = True
                Alocar(Letra, Usadas)
            else:
                pass
        if not LetraEnc:
            Cont = Add1(Cont)
        if (Cont == 5):
            break
        print("Tienes {} intentos restantes".format(5 - Cont))
        Llenar(Guiones)
    if (LstElegido == Guiones):
        print("Wena esa :D")
        ContJG = Add1(ContJG)
    else:
        print("Vosotrois estáis muertos, jajaja, jajaja, jajaja")
        # como extra, si te equivocas te dice cual palabra era (si fuera ubisoft cobraria por el unos 20 dolares xD)
        print("La palabra correcta era {}{}".format(Elegido[0].upper(), Elegido[1:]))
        ContJP = Add1(ContJP)
    # para ver si quieres seguir jugando
    Elec = input("Quieres seguir jugando? (s/n) ")
    if (Elec[0] == 's'):
        Elec = True
    elif (Elec[0] == 'n'):
        Elec = False
        break
    else:
        print("Esa opción no existe")

print(f"Has jugado {Sum(ContJG, ContJP)} veces, has perdido {ContJP} veces y ganado {ContJG} veces")

'''
NO SE PORQUE PERO SE ME HACE TRIVIAL XD, SI SE OCUPA MAS INFO AHI ME AVISAS
'''
