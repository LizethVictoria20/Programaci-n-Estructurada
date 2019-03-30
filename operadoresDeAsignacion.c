#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;

  printf("Ingresa un numero: ");
  scanf("%i", &number);

  int modulo = number % 5;

  printf("El modulo del numero ingresado es: %i", modulo);


  return 0;
}
