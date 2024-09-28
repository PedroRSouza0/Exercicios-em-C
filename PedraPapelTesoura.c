#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolha, escolha_pc;

    printf("Vamos jogar pedra papel tesoura\nFaca sua escolha:\n1 - Pedra\n2 - Papel\n3 - Tesoura\n:");
    scanf("%d",&escolha);

    srand(time(NULL)); //Semente para gerar numeros aleatorios

    escolha_pc = rand() % 3 + 1; //Computador sorteia um numero de 1 a 3

    printf("O computador escolheu %d\n",escolha_pc);


    
    switch (escolha){
        case 1:
         if(escolha == 1 && escolha_pc == 3) //Pedra Vence
                printf("Voce ganhou!");
                else
                     if (escolha_pc == escolha)
                        printf("Empate");
                        else                
                    printf("Computador ganhou");
                    break;
        case 2:
        if (escolha == 2 && escolha_pc == 1) // Papel Vence
        printf("Voce ganhou");
             else
                if (escolha_pc == escolha)
                    printf("Empate");
                    else
                    printf("Computador ganhou");
            break;
        case 3:
            if (escolha == 3 && escolha_pc == 2) //Tesoura vence
        printf("Voce ganhou");
        else
            if (escolha_pc == escolha)
                printf("Empate");
                else
                    printf("Computador Ganhou");
            default:
                printf("Digite uma opcao valida");
                break;
    }
       return 0;
}    