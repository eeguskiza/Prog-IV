#include <stdio.h>
#include "../../../include/operaciones.h"

int main() {
    printf("Operaciones simples en C\n");
    printf("Sumas\n");
    int count; 
    for(count = 0; count < 10; count++)
    {
        int suma = sumar(count, count + 1); 
        printf("Suma %i + %i: %i\n", count, count + 1, suma);    
    }
    printf("\n");
    printf("Restas\n");
    for(count = 10; count > 0; count--) 
    {
        int resta = restar(count, 1); 
        printf("Resta %i - %i: %i\n", count, 1, resta);
    }
    printf("\n");
    printf("Multiplicaciones\n");
    for(count = 1; count < 10; count++)
    {
        int multiplicacion = multiplicar(count, count + 1); 
        printf("Multiplicacion %i * %i: %i\n", count, count + 1, multiplicacion);
    }
    printf("\n");
    printf("Divisiones\n");
    for(count = 10; count > 1; count--)
    {
        int division = dividir(count, 2); 
        printf("Division %i / %i: %i\n", count, 2, division);
    }
    return 0;
}
