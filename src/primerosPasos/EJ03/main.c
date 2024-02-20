#include <stdio.h>
#include "../../../include/caracteres.h" 

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
            if (isUpperCase(c)) {
                printf("Es una mayúscula.\n");
            } else if (isLowerCase(c)) { // Verifica si el carácter es una minúscula
                printf("Es una minúscula.\n");
            }

            // Verifica si el carácter es un dígito
            if (isNumber(c)) {
                printf("Es un número.\n");
            }

            // Verifica si el carácter es una letra
            if (isLetter(c)) {
                printf("Es una letra.\n");
                // Convierte y muestra la letra en mayúsculas y minúsculas
                printf("En mayúsculas: %c\n", toUpperCase(c));
                printf("En minúsculas: %c\n", toLowerCase(c));
            } else { // Si no es una letra ni un número, se considera otro carácter
                printf("Es otro tipo de carácter.\n");
            }
        }

    } while(c != 'q' && c != 'Q'); // Termina el bucle si el usuario introduce 'q' o 'Q'

    printf("¡Sí! '%c' es la letra que buscamos.\n", c);

    return 0;
}
