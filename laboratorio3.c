#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5 // Tamaño de la matriz

// Función para encontrar la secuencia más larga de 1s consecutivos en filas
int encontrarSecuenciaLarga(int matriz[SIZE][SIZE]) {
    int maxSecuencia = 0;

    // Recorrer las filas de la matriz
    for (int i = 0; i < SIZE; i++) {
        int secuenciaActual = 0;
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] == 1) {
                secuenciaActual++; // Aumentar el contador si encontramos un 1
                if (secuenciaActual > maxSecuencia) {
                    maxSecuencia = secuenciaActual; // Actualizar la secuencia más larga
                }
            } else {
                secuenciaActual = 0; // Reiniciar el contador si encontramos un 0
            }
        }
    }

    return maxSecuencia; // Devolver la secuencia más larga encontrada
}

// Función para llenar la matriz con valores binarios aleatorios (0s y 1s)
void llenarMatrizAleatoria(int matriz[SIZE][SIZE]) {
    srand(time(NULL)); // Inicializa el generador de números aleatorios

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 2; // Generar aleatoriamente 0 o 1
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]); // Imprimir cada valor con un espacio
        }
        printf("\n"); // Nueva línea al final de cada fila
    }
}

int main() {
    int matriz[SIZE][SIZE];

    // Llenar la matriz con valores aleatorios
    llenarMatrizAleatoria(matriz);

    // Imprimir la matriz generada
    printf("Matriz generada:\n");
    imprimirMatriz(matriz);

    // Encontrar y mostrar la secuencia más larga de 1s en las filas
    int secuenciaMasLarga = encontrarSecuenciaLarga(matriz);
    printf("La secuencia más larga de 1s en las filas es: %d\n", secuenciaMasLarga);

    return 0;
}
