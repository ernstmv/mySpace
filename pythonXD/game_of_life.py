import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

def vecinos(x, y):
    vecindad = [(x-1, y-1), (x, y-1), (x+1, y-1),
                (x-1, y),             (x+1, y),
                (x-1, y+1), (x, y+1), (x+1, y+1)]
    return [(x, y) for x, y in vecindad if 0 <= x < n and 0 <= y < m]


def actualizar_estado(estado_actual):
    nuevo_estado = estado_actual.copy()
    for x in range(n):
        for y in range(m):
            suma_vecinos = sum(estado_actual[i, j] for i, j in vecinos(x, y))
            if estado_actual[x, y] == 1:
                if suma_vecinos < 2 or suma_vecinos > 3:
                    nuevo_estado[x, y] = 0
            else:
                if suma_vecinos == 3:
                    nuevo_estado[x, y] = 1
    return nuevo_estado

n = 50  # Número de filas
m = 50  # Número de columnas
p = 0.2  # Probabilidad de que una celda inicial esté viva

# Inicializa el estado inicial de manera aleatoria
estado_inicial = np.random.choice([0, 1], size=(n, m), p=[1-p, p])

fig, ax = plt.subplots()
imagen = ax.imshow(estado_inicial, cmap='binary')


def actualizar(i):
    global estado_inicial
    estado_inicial = actualizar_estado(estado_inicial)
    imagen.set_data(estado_inicial)
    return imagen,

ani = animation.FuncAnimation(fig, actualizar, frames=10, interval=10, blit=True)
plt.show()