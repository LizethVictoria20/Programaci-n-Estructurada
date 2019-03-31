#include <stdio.h>
#include <stdlib.h>

int main()
{
  int integerArray[10];

  for(int i = 0; i < 10; i++){
    integerArray[i] = i * i;
      printf("El numero (%i): %i \n", i, integerArray[i]);
  }

  return 0;
}