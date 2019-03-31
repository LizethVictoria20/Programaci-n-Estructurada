#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sumaA = 0;
  int sumaB = 0;
  int sumaC = 0;
  int arrayBidimensional[3][4] = { {0, 1, 2, 1},
                                   {2 ,3, 2, 3},
                                   {10, 10, 3, 3} };

  for(int i = 0; i < 4; i++){
   sumaA += arrayBidimensional[0][i];
   sumaB += arrayBidimensional[1][i];
   sumaC += arrayBidimensional[2][i];
  }
  printf("La suma %i \n", sumaA);
  printf("La suma %i \n", sumaB);
  printf("La suma %i \n", sumaC);

  return 0;
}