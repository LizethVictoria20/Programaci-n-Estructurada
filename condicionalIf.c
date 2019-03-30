#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  printf("Condicional If - Else \n");

  int valA = 50;
  int valB = 100;
  int valC = 150;

  printf("Primera condición  \n");
    if(valA == valB){
      printf("Esta condicion no se cumplira \n");
    }
    else if(valB == valC){
      printf("Esta condicion tampoco se cumplira \n");
    }
    else{
      printf("Despues de esta condicion el programa terminara \n");
    }


  return 0;
}