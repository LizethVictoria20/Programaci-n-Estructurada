#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  printf("Condicional If  \n");

  int valA, valB, valC;

  valA = valB = 100;
  printf("Primera condición  \n");
    if(valA == valB){
      printf("Ambos valores son iguales  \n");
    }
    if(valA == valB){
      printf("Ambos valores son iguales  \n");
      valC = valA + valB;
      printf("Ademas el valor de ambos numeros es: %i", valC);
    }

  return 0;
}