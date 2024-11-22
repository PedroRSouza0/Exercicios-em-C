#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void){

    int numero, numerousuario = 999;
    int tentativas = 0;

    srand(time(NULL)); //Semente para numeros aleatorios diferentes a cada iteração do programa
    numero = rand() % 11; //Gera um num aleatorio entre 0 e 10

    printf("Escolhi um numero de 0 a 10. Acerte se conseguir!\n");

    while(numerousuario != numero){
        printf("Digite o seu numero:\n");
        scanf("%d",&numerousuario);
        tentativas++;

        if(numerousuario != numero)
            printf("Errado. Tente novamente!\n");
    }

    printf("Muito bem! O Numero em que eu escolhi foi o %d e voce precisou de %d tentativas para acertar\n",numero,tentativas);

    return 0;
}