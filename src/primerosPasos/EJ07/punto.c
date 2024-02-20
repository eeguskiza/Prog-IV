#include <stdio.h>
#include "../../../include/punto.h"

Punto escalar(Punto *p, int n){  
    return (Punto) {p->x + n, p->y + n}; 
}