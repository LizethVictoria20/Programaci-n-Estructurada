#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arrayBidimensional[4][4];

  arrayBidimensional[0][0] = 11;
  arrayBidimensional[0][1] = 12;
  arrayBidimensional[0][2] = 13;
  arrayBidimensional[0][3] = 14;

  arrayBidimensional[1][0] = 29;
  arrayBidimensional[1][1] = 28;
  arrayBidimensional[1][2] = 27;
  arrayBidimensional[1][3] = 26;

  arrayBidimensional[2][0] = 31;
  arrayBidimensional[2][1] = 32;
  arrayBidimensional[2][2] = 33;
  arrayBidimensional[2][3] = 34;

  arrayBidimensional[3][0] = 41;
  arrayBidimensional[3][1] = 42;
  arrayBidimensional[3][2] = 43;
  arrayBidimensional[3][3] = 44;



  printf("Valor en (0.1): %i \n", arrayBidimensional[0][0]);
  printf("Valor en (0.1): %i \n", arrayBidimensional[0][1]);
  printf("Valor en (0.1): %i \n", arrayBidimensional[0][2]);
  printf("Valor en (0.1): %i \n", arrayBidimensional[0][3]);

  printf("Valor en (0.2): %i \n", arrayBidimensional[1][0]);
  printf("Valor en (0.2): %i \n", arrayBidimensional[1][1]);
  printf("Valor en (0.2): %i \n", arrayBidimensional[1][2]);
  printf("Valor en (0.2): %i \n", arrayBidimensional[1][3]);

  printf("Valor en (0.3): %i \n", arrayBidimensional[2][0]);
  printf("Valor en (0.3): %i \n", arrayBidimensional[2][1]);
  printf("Valor en (0.3): %i \n", arrayBidimensional[2][2]);
  printf("Valor en (0.3): %i \n", arrayBidimensional[2][3]);


  return 0;
}