#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
    float real;
    float imag;
} Complex;

//Sin puntero
void printComplex(Complex c);
//Con puntero
void printComplex2(Complex *c);

Complex sumaComplex(Complex c, Complex b);

float modulo(Complex c);

#endif