#include <stdio.h>
#include <stdlib.h>

int main()
{
  int option;

  printf("Te encuentras en un sueño y tienes tres caminos \n");

  printf("Escribe 1 si quieres ir por el camino de los dulces \n");
  printf("Escribe 2 si quieres ir por el camino de madera \n");
  printf("Escribe 3 si quieres ir por el camino de los gatitos \n");

  printf("Escoge una opción \n");
  scanf("%i", &option);

  switch(option){
    case 1:
    printf("Lo siento, moriste en el camino. \n");
    break;
    case 2:
    printf("Te has perdido. \n");
    break;
    case 3:
    printf("Los gatitos lindos te llevan a una puerta y al cruzar te despiertas! \n");
    break;
    default:
    printf("Losiento, esta no es una opcion correcta. \n");
    break;
  }


  return 0;
}