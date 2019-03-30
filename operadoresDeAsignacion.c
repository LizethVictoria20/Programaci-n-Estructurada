#include <stdio.h>
#include <stdlib.h>

int main()
{

  printf("Operadores de asignación \n");

  int value;

  value = 11;
  printf("El valor de la variable de value es: %i \n", value);

  value += 1;
  printf("El valor de la variable de value es: %i \n", value);

  value -= 2;
  printf("El valor de la variable de value es: %i \n", value);

  value *= 3;
  printf("El valor de la variable de value es: %i \n", value);

  value /= 4;
  printf("El valor de la variable de value es: %i \n", value);

  value %= 5;
  printf("El valor de la variable de value es: %i \n", value);


  //Operadores de incremento y decremento

  printf("Operadores de incremento y decremento \n");

  int valor, rest;

  valor = 20;
  rest = valor++;

  printf("El valor de value es: %i \n", rest);

  valor = 20;
  rest = valor--;

  printf("El valor de value es: %i", valor);

    return 0;
}
