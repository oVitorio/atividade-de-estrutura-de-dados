#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;

    printf("Entre com o valor: ");
    scanf("%d", &number);

    if(number %3 == 0 && number%7 == 0){
        printf("E multiplo de 3 e 7.");
    }else{
        printf("Nao e multiplo de 3 e 7.");
    }
    return 0;
}
