#include "caracteres.h"
#include <ctype.h> // Para funciones de prueba de caracteres

bool isUpperCase(char c) {
    return isupper(c);
}


bool isLowerCase(char c) {
    return islower(c);
}

bool isLetter(char c) {
    return isalpha(c);
}

bool isNumber(char c) {
    return isdigit(c);
}

int isOtherCharacter(int c) {
    // Considera que no es un carácter 'otro' si es letra o número
    return !isLetter(c) && !isNumber(c) && !isEnter(c);
}

int isEntero(char c) {
    return c == '\n';
}

char toUpperCase(char c) {
    if (isLowerCase(c)) {
        return toupper(c);
    }
    return c; // Devuelve el carácter original si no es una letra minúscula
}

char toLowerCase(char c) {
    if (isUpperCase(c)) {
        return tolower(c);
    }
    return c; // Devuelve el carácter original si no es una letra mayúscula
}

