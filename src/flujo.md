# Estructuras de Control de Flujo en C

Las estructuras de control de flujo en C determinan la dirección que toma el programa en tiempo de ejecución en base a condiciones y ciclos.

## Condicional If

La estructura `if` evalúa una condición y ejecuta un bloque de código si la condición es verdadera.

```c
if (condicion) {
    // Bloque de código que se ejecuta si la condición es verdadera
}
```

Para múltiples condiciones, se pueden utilizar las declaraciones else `if`y `else`.
```c
if (condicion1) {
    // Bloque si condicion1 es verdadera
} else if (condicion2) {
    // Bloque si condicion2 es verdadera
} else {
    // Bloque si ninguna de las condiciones anteriores se cumplió
}
```
## Bucle For

La estructura `for` se utiliza para repetir un bloque de código un número específico de veces.

```c
for (inicialización; condición; actualización) {
    // Bloque de código que se ejecuta mientras la condición sea verdadera
}
```

## Bucle While

La estructura `while` se utiliza para repetir un bloque de código mientras una condición sea verdadera.

```c
while (condición) {
    // Bloque de código que se ejecuta mientras la condición sea verdadera
}
```

## Bucle Do-While

La estructura `do-while` es similar a `while`, pero garantiza que el bloque de código se ejecute al menos una vez, incluso si la condición es falsa.

```c
do {
    // Bloque de código que se ejecuta al menos una vez
} while (condición);
```

## Bucle For Each

La estructura `for each` se utiliza para recorrer los elementos de un arreglo o colección.

```c
for (tipo variable : arreglo) {
    // Bloque de código que se ejecuta para cada elemento del arreglo
}
```

## Interrupción de Bucles

Las declaraciones `break` y `continue` se utilizan para interrumpir la ejecución de un bucle.

- `break`: Termina la ejecución del bucle y continúa con la siguiente instrucción fuera del bucle.
- `continue`: Salta a la siguiente iteración del bucle, omitiendo el resto del bloque de código.

## Switch

La estructura `switch` se utiliza para seleccionar una de varias opciones basadas en el valor de una expresión.

```c
switch (expresión) {
    case valor1:
        // Bloque de código si la expresión es igual a valor1
        break;
    case valor2:
        // Bloque de código si la expresión es igual a valor2
        break;
    default:
        // Bloque de código si la expresión no coincide con ningún valor
}
```
