#include <stdio.h>

int main(){

    printf("Hola Mundo\n");

    //e) Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo
    int variable = 7;
    int *pvariable;

    pvariable = &variable;

    printf("1) El contenido del puntero: %d\n", *pvariable);
    printf("2) La dirección de memoria almacenada por el puntero: %p\n", pvariable);
    printf("3) La dirección de memoria de la variable: %p\n", &variable);
    printf("4) la dirección de memoria del puntero: %p\n", &pvariable);
    printf("5) el tamaño de memoria utilizado por esa variable usando la función sizeof(): %d", sizeof(int));

    return 0;
}