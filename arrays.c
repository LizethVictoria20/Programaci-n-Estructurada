#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero[5];
  int resultado = 1;

  for(int i = 0; i < 5; i++){
    printf("valor[%i]", i+1);
    scanf("%i", &numero[i]);
    resultado *= numero[i];
  }
  printf("El resultado de la multiplicacion es: %i", resultado);

  return 0;
}



