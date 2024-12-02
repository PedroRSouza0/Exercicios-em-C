#include <stdio.h>

int main(void){

    int num = 0, total = 0, soma = 0;

    while(num != 999){
        printf("Insira um numero. Para sair digite 999\n");
        scanf("%d",&num);

        if(num != 999){
        total++;
        soma += num;}

    }

    printf("Soma: %d\n",soma);
    printf("Total de numeros digitados: %d\n",total);
    
    return 0;
}