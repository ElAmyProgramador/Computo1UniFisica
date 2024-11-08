import random as rd
import matplotlib.pyplot as plt

n = 1000
j = 0
x = [0]
y = [1000]
while (n > 0):
    c = 0
    for i in range(n):
        d = rd.randint(1, 6)
        if (d == 3):
            c += 1
        #print(i, d)
    n -= c
    j += 1
    #print(c)
    #print("Quedan {} dados".format(n))
    x.append(j)
    y.append(n)

print(list(x), list(y))
plt.ylabel("Y: Dados restantes")
plt.xlabel("X: iteraciones")
plt.title("Decaimiento radioactivo (creo)")
plt.grid(True, linestyle = ":")
plt.legend()
plt.plot(x, y, linewidth = 2, markersize = 2)
plt.show()
