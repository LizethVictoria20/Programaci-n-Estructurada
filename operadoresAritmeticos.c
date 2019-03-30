#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float altura;
    float pi = 3.14;


    printf("Ingresa el valor de radio: ");

    scanf("%f", &radio);

    printf("Ingresa el valor de altura: ");

    scanf("%f", &altura);

    float volumen = pi * pow(radio, 2) * altura;

    printf("El valor del volumen es : %f ", volumen);



    return 0;
}
