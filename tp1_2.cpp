#include <stdio.h>

//a) Haga una función que devuelva el cuadrado de un número
int calcularCuadrado(int numero);
//b) Haga la función anterior, pero devolviendo un tipo void
void numeroAlCuadrado(int *pnumero);
//c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void mostrarVariable(int *pvariable);
/*d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos. void Invertir(a,b) //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a */
void Invertir(int *pa,int *pb);
/*e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. void orden(a,b) //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande*/
void orden(int *pa, int *pb);

int main(){

    int num, cuadrado, variable, a, b;

    //a) Haga una función que devuelva el cuadrado de un número
        printf("\nIngrese un numero: ");
        scanf("%d", &num);
        cuadrado = calcularCuadrado(num);
        printf("El cuadrado del numero es: %d\n", cuadrado);

    //b) Haga la función anterior, pero devolviendo un tipo void
        numeroAlCuadrado(&num);
        printf("El cuadrado del numero calculado con funcion de tipo void es: %d\n", num);

    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
        printf("Ingrese una variable (entero): ");
        scanf("%d", &variable);
        mostrarVariable(&variable);
    
    //f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla

        printf("\nIngrese dos numeros enteros, ingrese el primer numero a: ");
        scanf("%d", &a);
        printf("Ingrese el segundo numero b: ");
        scanf("%d", &b);

        Invertir(&a,&b);

        printf("\nSe invirtieron los valores, el valor de 'a' ahora es: %d y el valor de 'b' ahora es: %d", a, b);

        //restauro valores originales
        Invertir(&a,&b);

        printf("\nSe restauraron los valores, el valor de 'a' ahora es: %d y el valor de 'b' ahora es: %d", a, b);

        //ordeno los valores
        orden(&a, &b);

        //muestro valores ordenados
        printf("\nSe ordenaron los valores de menor a mayor, el valor de a ahora es: %d y el valor de b ahora es: %d", a, b);

    return 0;
}


int calcularCuadrado(int numero){
    int cuadrado;
    cuadrado = numero * numero;
    return cuadrado;
}


void numeroAlCuadrado(int *pnumero){

    *pnumero *= *pnumero;
}

void mostrarVariable(int *pvariable){
    printf("\nLa direccion de la variable es %p y el contenido de la misma es: %d", pvariable, *pvariable);
}

void Invertir(int *pa,int *pb){
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}

void orden(int *pa, int *pb){

    int aux;
    if (*pb < *pa)
    {
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }  
}