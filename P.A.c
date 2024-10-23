#include <stdio.h>

int main(void){
    int primeiro, razao, termos;
    int i; // Contador

    printf("Digite o primeiro valor da P.A:\n");
    scanf("%d",&primeiro);

    printf("Digite a razao desta P.A:\n");
    scanf("%d",&razao);

    printf("Digite a quantidade de termos desta P.A:\n");
    scanf("%d",&termos);

    for(i=0; i < termos; i++){
        printf("%d ",primeiro);
        primeiro += razao;
    }
    return 0;
}