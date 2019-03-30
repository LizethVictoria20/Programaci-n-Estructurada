#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 1;
  int limit;

  printf("Ingresa un numero para iterar: ");
  scanf("%i", &limit);

  while(i <= limit){
    printf("# \n");
    i++;
  }
  return 0;
}