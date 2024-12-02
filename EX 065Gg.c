#include <stdio.h>

int main(void){

    int num = 0, maior = 0, menor = 0, soma = 0, media = 0;
    int termos = 0;
 
    printf("Digite um numero:[999] para parar]\n");
    scanf("%d",&num);

while(num != 999){
    termos++;
    maior = num;
    if (num > maior)
        num = maior;
    else
        num = menor; 

    soma += num;
    media = soma/termos;
    
    printf("Digite um numero:[999] para parar]\n");
    scanf("%d",&num);}       

    printf("FEEDBACK FINAL\n");
    printf("Soma dos numeros = %d\n",soma);
    printf("Media = %d\n",media);
    printf("Maior e menor numeros = %d  / %d \n");

    return 0;
}