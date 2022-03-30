#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Entre com o valor: ");
    scanf("%d", &number);

    if(number %10 == 0 && number%5 == 0 && number %2 == 0){
        printf("E multiplo de 10, 5 e 2.");
    }else{
        printf("Nao e multiplo de 10, 5 e 2.");
    }
    return 0;
}
