#include <stdio.h>

// Función para calcular el factorial
int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1; // Corrección: No se redeclara 'n'como una nueva variable si no que se le cambia el valor 
    }
    return i;
}

int main() {
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);

    // Calcular el factorial del número ingresado
    int resultado = factorial(numero);
    printf("El factorial de %d es: %d\n", numero, resultado);

    return 0;
}
