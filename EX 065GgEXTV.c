#include <stdio.h>

int main(void){

    int num = 0, maior, menor, soma = 0; 
    float media = 0;
    int termos = 0;
    char opcao = 'S';
    
while(opcao != 'n' && opcao != 'N'){
    printf("Digite um numero:\n);
    scanf("%d",&num);
    
    termos++; 
    soma += num;
    media = soma/termos;

    if(num > maior){
        maior = num;
    }
    if(num < menor)
        menor = num;
    
    printf("Deseja continuar?[S/N]\n");
    scanf(" %c",&opcao);
    }       

    printf("\nFEEDBACK FINAL\n");
    printf("Soma dos numeros = %d\n",soma);
    printf("Media = %.1f\n",media);
    printf("Maior e menor numeros = %d  / %d \n",maior, menor);

    return 0;
}
