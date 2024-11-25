#include <stdio.h>

int main(){

    int numero, total = 1;

    printf("Insira seu numero\n");
    scanf("%d",&numero);

while(numero > 0){

    total *= numero;
    if(numero > 1) // Formatação da saída
        printf("%d x ",numero);
    else    
        printf("%d ",numero);    
    numero--;
}
    printf("\nTotal = %d\n",total);
    return 0;
}