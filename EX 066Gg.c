#include <stdio.h>

int main(){
    int numero;
    int total = 0;
    int soma = 0;

    while(1){
        printf("Digite um numero [999 p/SAIR]\n");
        scanf("%d",&numero);

        if(numero == 999)
            break;

        total++;
        soma += numero;    
}
    printf("Voce digitou %d numeros\n",total);
    printf("A Soma deles foi %d\n",soma);

    return 0;
}