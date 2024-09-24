#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a, b;

    printf("Digite o valor de a:\n");
    scanf(" %d",&a);
    printf("Digite o valor de b:\n");
    scanf(" %d",&b);

if (a > b)
    printf("%d maior que %d",a,b);
    else
        if (a < b)
            printf("%d menor que %d",a,b);
            else
                printf("Os valores sao iguais");
    
    return 0;                
}