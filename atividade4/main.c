#include <stdio.h>
#include <stdlib.h>

void main()
{
    int number;

    printf("Enter com o valor: ");
    scanf("%d", &number);

    if(number %3 == 0){
        printf("E multiplo de 3.");
    }else{
        printf("Nao e multiplo de 3.");
    }
    return 0;
}
