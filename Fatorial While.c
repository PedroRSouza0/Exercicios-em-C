#include <stdio.h>

int main(){

    int numero, total = 1;

    printf("Insira seu numero\n");
    scanf("%d",&numero);

while(numero >= 1){

    total *= numero;
    printf("%d x ",numero);
    numero--;
}
    printf("\nTotal = %d\n",total);
    return 0;
}