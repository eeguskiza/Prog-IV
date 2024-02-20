#include <stdio.h>
#include "../../../include/punto.h"

int main() {
    Punto a = {2, 2};
    Punto b = escalar(&a, 2);
    Punto c = {4, 5};
    Punto d = escalar(&c, 10);
    printf("Punto inicial: (%d , %d)\n", a.x, a.y);  
    printf("Valor escala: %u\n", 2);
    printf("Punto escalado: (%d , %d)\n\n", b.x, b.y);  

    printf("Punto inicial: (%d , %d)\n", c.x, c.y);  
    printf("Valor escala: %u\n", 10);
    printf("Punto escalado: (%d , %d)\n", d.x, d.y);  

    return 0;
}
