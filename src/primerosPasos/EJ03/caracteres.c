#include <stdbool.h> // Para el tipo de dato bool
#include "../../../include/caracteres.h"
bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z'; // Verifica si el carácter está entre 'A' y 'Z'
}

bool isLowerCase(char c) {
    return c >= 'a' && c <= 'z'; // Verifica si el carácter está entre 'a' y 'z'
}

bool isLetter(char c) {
    return isUpperCase(c) || isLowerCase(c); // Verifica si el carácter es una letra
}

bool isNumber(char c) {
    return c >= '0' && c <= '9'; // Verifica si el carácter está entre '0' y '9'
}

bool isOtherCharacter(char c) {
    // Retorna verdadero si el carácter no es una letra, ni un número ni un salto de línea
    return !isLetter(c) && !isNumber(c) && c != '\n';
}

bool isEnter(char c) {
    return c == '\n'; // Retorna verdadero si el carácter es un salto de línea ('\n')
}

char toUpperCase(char c) {
    if (isLowerCase(c)) {
        return c - 'a' + 'A'; // Convierte a mayúscula si es minúscula
    }
    return c; // Devuelve el carácter original si no es una letra minúscula
}

char toLowerCase(char c) {
    if (isUpperCase(c)) {
        return c - 'A' + 'a'; // Convierte a minúscula si es mayúscula
    }
    return c; // Devuelve el carácter original si no es una letra mayúscula
}
