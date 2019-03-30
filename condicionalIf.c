#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
 printf("Reto 1 \n");

  int number = 5;
  int numeroIngresado;

  printf("Adivina el numero entre 1 y 10 que estoy pensando: ");
  scanf("%i", &numeroIngresado);

  if(number == numeroIngresado){
    printf("Adivinaste");
  }
  else{
    printf("Ese no es, perdiste!");
  }
  return 0;
}