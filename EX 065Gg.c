#include <stdio.h>

int main(void){

    int num = 0, maior, menor, soma = 0; 
    float media = 0;
    int termos = 0;
 
    printf("Digite um numero:[999] para parar]\n");
    scanf("%d",&num);

    maior = num;
    menor = num;

while(num != 999){
    termos++; 
    soma += num;
    media = soma/termos;

    if(num > maior){
        maior = num;
    }
    if(num < menor)
        menor = num;
        
    
    printf("Digite um numero:[999] para parar]\n");
    scanf("%d",&num);}       

    printf("\nFEEDBACK FINAL\n");
    printf("Soma dos numeros = %d\n",soma);
    printf("Media = %.1f\n",media);
    printf("Maior e menor numeros = %d  / %d \n",maior, menor);

    return 0;
}