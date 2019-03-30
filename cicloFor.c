#include <stdio.h>
#include <stdlib.h>

int main()
{
  int upperLim, bottomLim;

  printf("Vamos a imprimir en orden descendiente \n");

  printf("Ingresar limite superior: \n");
  scanf("%i", &upperLim);

  printf("Ingresar limite inferior: \n");
  scanf("%i", &bottomLim);

  for(int i = upperLim; i >= bottomLim; i--){
    printf("El numero es : %i \n", i);
  }
  return 0;
}