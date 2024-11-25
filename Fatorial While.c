#include <stdio.h>

int main(){

    int numero, total = 1;

    printf("Insira seu numero\n");
    scanf("%d",&numero);

while(numero > 1){

    total *= numero;
    numero--;
}
    printf("Total = %d",total);
    return 0;
}