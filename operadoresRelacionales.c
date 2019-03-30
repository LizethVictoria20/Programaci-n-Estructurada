#include <stdio.h>
#include <stdlib.h>

int main()
{
  float valA = 5;
  float valB = 10;

  //Menor que
  if(valA < valB){
    printf("Pregunta 1: True \n");
  }
  else{
    printf("Pregunta 1: False \n");
  }

  //Menor o igual que
  if(valA <= valB){
    printf("Pregunta 2: True \n");
  }
  else{
    printf("Pregunta 2: False \n");
  }

  //Mayor que
  if(valA > valB){
    printf("Pregunta 3: True \n");
  }
  else{
    printf("Pregunta 3: False \n");
  }

  //Mayor o igual que
  if(valA >= valB){
    printf("Pregunta 4: True \n");
  }
  else{
    printf("Pregunta 4: False \n");
  }

  //Igual que
  if(valA == valB){
    printf("Pregunta 5: True \n");
  }
  else{
    printf("Pregunta 5: False \n");
  }

  //No igual que
  if(valA != valB){
    printf("Pregunta 6: True \n");
  }
  else{
    printf("Pregunta 6: False \n");
  }
  //------------------OPERADORES LOGICOS----------------//

  float valorA, valorB, valorC;
  valorA = 5;
  valorB = valorC = 10;

  if((valorA < valorB) && (valorB == valorC)){
    printf("Se cumplieron las dos condiciones \n");
  }
  else{
    printf("No se cumplieron las dos condiciones \n");
  }


  if((valorA > valorB) || (valorA <= valorC)){
    printf("Se cumplieron por lo menos una de las dos condiciones \n");
  }
  else{
    printf("No se cumplieron las dos condiciones \n");
  }

    return 0;
}
