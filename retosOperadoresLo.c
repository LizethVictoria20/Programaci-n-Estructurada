#include <stdio.h>
#include <stdlib.h>

int main()
{
  int primerNumero;
  int segundoNumero;

  printf("Ingresa el primer numero: ");
  scanf("%i", &primerNumero);

  printf("Ingresa el segundo numero: ");
  scanf("%i", &segundoNumero);

  if(primerNumero < segundoNumero){
    printf("El numero menor es %i \n", primerNumero);
  }
  else{
    printf("El numero mayor es %i \n", segundoNumero);
  }

  int calificacion;

  printf("Para saber si aprobo o no ingresa tu calificación: ");
  scanf("%i", &calificacion);

  if(calificacion < 60){
    printf("Haz reprobado");
  }
  else{
    printf("Exelente trabajo, aprobaste 😃 ");
  }

  return 0;
}