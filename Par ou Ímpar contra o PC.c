#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char opcao;
    int num, numPC, soma = 0, total = 0;

    printf("JOGO DO PAR OU IMPAR\n");

    while(1){
        printf("\nDigite um numero entre 0 e 10\n");
        scanf("%d",&num);

        printf("Par ou Impar? [P/I]\n");
        scanf(" %c",&opcao);

        //Sorteia um numero aleatório entre 0 e 10
        srand(time(NULL));
        numPC = rand() % 11;

        soma = num + numPC;

        printf("O Computador escolheu %d\n", numPC);
        printf("Total %d\n", soma);

        //Jogador Vence escolhendo Par
        if((opcao == 'p' || opcao == 'P') && soma % 2 == 0){
            printf("RESULTADO: PAR\nJogador Ganhou!\n");
            total++;}
        //Jogador Vence escolhendo Impar    
        else 
            if((opcao == 'i' || opcao == 'I') && soma % 2 == 1){
                printf("RESULTADO: IMPAR\nJogador Ganhou!\n");
                total++;}
        //Computador Vence e encerra o programa        
        else{
            printf("Computador Ganhou. Fim de Jogo\n");
            break;}


    }
    printf("\nFIM DE JOGO\n");
    printf("Voce conseguiu vencer %d vezes conscecutivas\n", total);

    return 0;
    }
