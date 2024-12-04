#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char opcao;
    int num, numPC, soma = 0, total = 0;

    printf("JOGO DO PAR OU IMPAR\n");

    while(1){
        printf("\nDigite um numero\n");
        scanf("%d",&num);

        printf("Par ou Impar? [P/I]\n");
        scanf(" %c",&opcao);

        srand(time(NULL));
        numPC = rand() % 10 + 1;

        soma = num + numPC;

        printf("O Computador escolheu %d\n", numPC);
        printf("Total %d\n", soma);

        if((opcao == 'p' || opcao == 'P') && soma % 2 == 0){
            printf("RESULTADO: PAR\nJogador Ganhou!\n");
            total++;}
        else 
            if((opcao == 'i' || opcao == 'I') && soma % 2 == 1){
                printf("RESULTADO: IMPAR\nJogador Ganhou!\n");
                total++;}
        else{
            printf("Computador Ganhou. Fim de Jogo\n");
            break;}


    }
    printf("\nFIM DE JOGO\n");
    printf("Voce conseguiu vencer %d vezes conscecutivas\n", total);

    return 0;
    }