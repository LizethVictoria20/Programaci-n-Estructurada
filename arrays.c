#include <stdio.h>
#include <stdlib.h>

int main()
{
  int integerList[3];

  integerList[0] = 4;
  integerList[1] = 5;
  integerList[2] = 6;

  float floatList[] = {2.34, 4.2, 52.5, 9.5, 3.2};

  char charList[3];
  charList[0] = 'L';
  charList[1] = 'I';
  charList[2] = 'Z';

  printf("\n Primer entero: \t\t %i", integerList[0]);
  printf("\n Ultimo numero flotante: \t\t %f", floatList[4]);
  printf("\n Mi nombre es: \t\t %c%c%c", charList[0], charList[1], charList[2]);
  return 0;
}