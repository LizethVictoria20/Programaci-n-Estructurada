#include <stdio.h>
#include <stdlib.h>

int main()
{

  int fahrenheit;

    printf("Ingrese el valor de fahrenheit: " );

    scanf("&i", &fahrenheit);

    float celcius = (fahrenheit - 32) / 1.8 ;

    printf("Su valor de fahrenheit a celcius es : %f", celcius);

    return 0;
}
