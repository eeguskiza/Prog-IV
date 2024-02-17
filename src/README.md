# Apuntes de Programación en C

Este repositorio contiene apuntes básicos y ejemplos de código sobre la programación en C, incluyendo la estructura de un programa típico, definiciones de funciones, uso de `structs`, y más.

## Estructura Básica de un Programa en C

Un programa en C típicamente consta de las siguientes partes:

### src/

Contiene los archivos fuente `.c`:

- **`main.c`**: Archivo principal con la función `main()`, punto de entrada del programa.
- **`operaciones.c`**: Implementación de funciones como operaciones matemáticas.

### include/

Alberga los archivos de encabezado `.h`:

- **`operaciones.h`**: Declara funciones implementadas en `operaciones.c`.
- **`structs.h`**: Declara estructuras de datos usadas en el programa. Una estructura es un tipo de dato que permite agrupar variables relacionadas.

### bin/

Esta carpeta contiene los ejecutables compilados del proyecto. Los archivos binarios resultantes de la compilación se almacenan aquí para facilitar la ejecución y las pruebas.


### Ejemplo de `main.c`

```c
#include <stdio.h> // Incluye la librería estándar de entrada/salida
#include "operaciones.h" // Incluye el archivo de encabezado de operaciones

int main() {
    int resultado = suma(5, 3);
    printf("El resultado de la suma es: %d\n", resultado);
    return 0;
}
```

### Ejemplo de `operaciones.c`
    
```c
#include "operaciones.h" // Incluye el archivo de encabezado de operaciones

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}
```

### Ejemplo de `operaciones.h`

```c
#ifndef OPERACIONES_H // Evita la inclusión múltiple del archivo de encabezado
#define OPERACIONES_H // Define un símbolo para evitar la inclusión múltiple

int suma(int a, int b);
int resta(int a, int b);

#endif // OPERACIONES_H
```

### Ejemplo de `structs.h`

```c
#ifndef STRUCTS_H // Evita la inclusión múltiple del archivo de encabezado
#define STRUCTS_H // Define un símbolo para evitar la inclusión múltiple

// Definición de una estructura de datos
typedef struct {
    int x;
    int y;
} Punto;

#endif 
```

### Compilación y Ejecución

Sustituir `nombreExe` por el nombre del ejecutable que se desea crear y `directorio` por el nombre del directorio donde se encuentran los archivos fuente.

```bash
gcc -I./include -o bin/nombreExe src/directorio/main.c src/directorio/operaciones.c
./bin/nombreExe
```