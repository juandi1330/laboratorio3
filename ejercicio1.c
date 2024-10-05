#include <stdio.h>

// Función para calcular la suma de las diagonales
int sumaDiagonales(int matriz[][3], int n) {
    int sumaPrincipal = 0, sumaSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaPrincipal += matriz[i][i];      // Suma de la diagonal principal
        sumaSecundaria += matriz[i][n - i - 1]; // Suma de la diagonal secundaria
    }
    return sumaPrincipal + sumaSecundaria; // Retorna la suma total de las diagonales
}

int main() {
    // Ejemplo de una matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3; // Tamaño de la matriz
    int suma = sumaDiagonales(matriz, n); // Llama a la función para calcular la suma
    printf("La suma de las diagonales es: %d\n", suma); // Imprime el resultado
    return 0; // Finaliza el programa
}
