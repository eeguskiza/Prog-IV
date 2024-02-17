# Apuntes de Programación en C

Este repositorio contiene apuntes básicos y ejemplos de código sobre la programación en C, incluyendo la estructura de un programa típico, definiciones de funciones, uso de `structs`, y más.

## Estructura Básica de un Programa en C

Un programa en C típicamente consta de las siguientes partes:

- **`main.c`**: El archivo principal que contiene la función `main()`, punto de entrada del programa.
- **`operaciones.c`**: Un archivo que contiene la implementación de diversas funciones, como operaciones matemáticas simples.
- **`operaciones.h`**: Un archivo de encabezado (`header`) que declara las funciones y `structs` utilizados en `operaciones.c`.

### Ejemplo de `main.c`

```c
#include <stdio.h>
#include "operaciones.h"

int main() {
    int resultado = suma(5, 3);
    printf("El resultado de la suma es: %d\n", resultado);
    return 0;
}

### Ejemplo de `main.c`
    
    ```c
    #include "operaciones.h"

    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

