#include <stdio.h>
#include <math.h>
#include "complex.h"

void printComplex(Complex c){
    printf("%f real %f imaginaria\n", c.real , c.imag);
}

//es para que apunte a la direccion de memoria y sea mas eficiente
void printComplex2(Complex *c){
    printf("%f real %f imaginaria\n", c->real , c->imag);
}

Complex sumaComplex(Complex c, Complex b){
    //printf("%f real %f imaginaria\n", (c.real + b.real) , (c.imag + b.imag));
    return (Complex) {(c.real + b.real) , (c.imag + b.imag)};
}

float modulo(Complex c){
    return sqrt(c.real * c.real + c.imag * c.imag);
}

