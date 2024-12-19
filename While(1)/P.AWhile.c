#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){

    int primeiro, razao;
    int i = 0; // Contador
    int termos = 10, novo;
    char resposta = ' ';

    printf("Insira o primeiro termo da P.A\n"); //Entrada do Primeiro termo
    scanf("%d",&primeiro);

    printf("Agora insira a razao da mesma\n"); //Entrada da Razao
    scanf("%d",&razao);

    while(i < termos){ // 10 primeiros Termos
        printf("%d ",primeiro);
        primeiro += razao;
        i++;
    }
    printf("FIM");

    while(resposta != 'n' && resposta != 'N'){
        printf("\nGostaria de mais termos?[s/n]\n");
        scanf(" %c",&resposta);


        if (resposta != 'n' && resposta != 'N'){
            printf("Insira quantos termos\n");
            scanf("%d",&novo);

            termos += novo;

            while(i < termos){
                printf("%d ",primeiro);
                primeiro += razao;
                i++;
            }
            printf("PAUSE");
        }
        
    }
    printf("Saindo do programa...");
    Sleep(2000);
    printf("\nPrograma executado com %d progressoes aritimeticas.",termos);
    printf("\nFIM\n");
    return 0;
}