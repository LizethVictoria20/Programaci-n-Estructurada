#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Veremos la secuencia fibonacci! ");

  int s;
  int num = 0;
  int res = 1;

  printf("dime cuantos numeros de fibo quieres: ");
  scanf("%i", &s);

  for(int i = 0; i <= s; i++)
  {
    printf("%i \n", num);
    num += res;
    res = num - res;
  }

  return 0;
}