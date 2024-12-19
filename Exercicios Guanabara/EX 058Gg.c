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

        if(numerousuario < 0 || numerousuario > 10){
            printf("Digite um numero entre 0 e 10 porfavor.\n");
            continue;} //Ignora o restante do loop e volta ao inicio}

            tentativas++; //Só conta as tentativas dentro do limite

        if(numerousuario < numero){
            printf("Mais... Tente novamente!\n");}
        else if(numerousuario > numero){
            printf("Menos... Tente novamente!\n");}
    }

    printf("Muito bem! O Numero em que eu escolhi foi o %d e voce precisou de %d tentativas para acertar\n",numero,tentativas);

    return 0;
}