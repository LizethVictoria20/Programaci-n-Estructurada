#include <stdio.h>
#include <stdlib.h>

int main()
{
  int integerArray[5];
  int max = 0;


  for(int i = 0; i < 6; i++){
    printf("valor %i \n", i);
    scanf("%i \n", &integerArray[i]);

    if(integerArray[i] > max){
      max = integerArray[i];
    };
  };
  printf("El numero mayor es: %i \n", max);

  return 0;
}