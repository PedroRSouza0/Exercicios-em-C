#include <stdio.h>

int main(){

    int primeiro, razao;
    int i = 0; // Contador

    printf("Insira o primeiro termo da P.A\n"); //Entrada do Primeiro termo
    scanf("%d",&primeiro);

    printf("Agora insira a razao da mesma\n"); //Entrada da Razao
    scanf("%d",&razao);

    while(i < 10){ // 10 primeiros Termos
        printf("%d ",primeiro);
        primeiro +=razao;
        i++;
    }

    printf("\nFIM\n");
    return 0;
}