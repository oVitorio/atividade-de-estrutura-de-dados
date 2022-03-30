#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number;

 printf ("Entre com um numero");
 scanf ("%d", &number);

 if( number > 20 ){
 printf("valor inserido: %d' ", number);
 }else{
 printf("valor não esta dentro do paremetro");

 }

    return 0;
}
