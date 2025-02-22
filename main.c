#include <stdio.h>

// Función para sumar los elementos de un array usando punteros
int sumarArray(int *arr, int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += *(arr + i); // Acceder a los elementos del array usando punteros
    }
    return suma;
}

int main() {
    int array[] = {1, 2, 3, 4, 5}; // Declarar e inicializar el array
    int size = sizeof(array) / sizeof(array[0]); // Calcular el tamaño del array

    // Llamar a la función sumarArray y obtener la suma de los elementos
    int suma = sumarArray(array, size);

    // Mostrar la suma de los elementos del array
    printf("La suma de los elementos del array es: %d\n", suma);

    return 0;
}
