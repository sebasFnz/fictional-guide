/******************************************************************************

compararLongitudArreglo.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define DIM 20

int main() {
    char nombre1[DIM] = "Ana";
    char nombre2[DIM] = "Anacleto";
    char nombre3[DIM] = "Anastasia";
  
    printf("La longitud de nombre1 es %ld\n", strlen(nombre1));
    printf("La longitud de nombre2 es %ld\n", strlen(nombre2));
    printf("La longitud de nombre3 es %ld\n", strlen(nombre3));
  
    return 0;
}