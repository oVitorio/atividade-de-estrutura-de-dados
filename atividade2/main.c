#include <stdio.h>
#include <stdlib.h>

void main()
{
    float x1;
    float x2;
    float result;

    printf("Escreva um valor: ");
    scanf("%f", &x1);

    printf("Escreva um outro valor: ");
    scanf("%f", &x2);

    result = x1 + x2;

    if(result>10){
        printf("O resultado e: %f", result);
    }else{
        printf("O resultado e menor que 10.");
    }

    return 0;
}
