#include <stdio.h>
#include "complex.h"

int main() {
    Complex a = {2, 3};
    Complex b = {2, -3};
    Complex c = {-2, 3};
    
    printf("Sin puntero \n\n");
    //sin puntero -> se le pasa una copia de a
    printComplex(a);
    printComplex(b);
    printComplex(c);
    printf("\n");

    printf("Con puntero \n\n");
    //con puntero -> la referencia de memoria
    printComplex2(&a);
    printComplex2(&b);
    printComplex2(&c);
    printf("\n");

    printf("Suma de complejos \n\n");
    printComplex(sumaComplex(a, b));
    printf("\n");

    printf("Modulo \n\n");
    printf("%f\n", modulo(a)); // Corrige esta línea para incluir el especificador de formato %f

}