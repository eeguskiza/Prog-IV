#include <stdio.h>
#include <ctype.h> // Para usar funciones como toupper, isupper, islower, isdigit, isalpha

int main() {
    char c;
    printf("Introduce caracteres. Para salir, escribe 'q' o 'Q'.\n");

    do {
        c = getchar();
        while(getchar() != '\n'); // Para limpiar el buffer

        // Verifica si el carácter no es 'q' o 'Q' para procesar la entrada
        if (c != 'q' && c != 'Q') {
            printf("Carácter: '%c', Valor ASCII: %d\n", c, c);

            // Verifica si el carácter es una mayúscula
            if (isupper(c)) {
                printf("Es una mayúscula.\n");
            } else if (islower(c)) { // Verifica si el carácter es una minúscula
                printf("Es una minúscula.\n");
            }

            // Verifica si el carácter es un dígito
            if (isdigit(c)) {
                printf("Es un número.\n");
            }

            // Verifica si el carácter es una letra
            if (isalpha(c)) {
                printf("Es una letra.\n");
                // Convierte y muestra la letra en mayúscula y minúscula
                printf("En mayúsculas: %c\n", toupper(c));
                printf("En minúsculas: %c\n", tolower(c));
            } else { // Si no es una letra ni un número, se considera otro carácter
                printf("Es otro tipo de carácter.\n");
            }
        }

    } while(c != 'q' && c != 'Q'); // Termina el bucle si el usuario introduce 'q' o 'Q'

    printf("¡Si! '%c' es la letra que buscamos.\n", c);

    return 0;
}
