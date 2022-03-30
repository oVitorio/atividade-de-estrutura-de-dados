#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float number;
    float raiz;
    float potencia;

    printf("Entre com valor: ");
    scanf("%f", &number);

    if(number>0){
        raiz = sqrt(number);
        printf("A raiz quadrada e %f", raiz);
    }else{
        potencia = pow(number, 2);
        printf("A potencia e %f", potencia);
    }
}
