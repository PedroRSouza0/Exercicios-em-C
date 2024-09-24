#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_alistamento, nascimento, atual, idade;
    char sexo;

    printf("Digite em que ano voce nasceu: ");
    scanf("%d",&nascimento);
    printf("Informe seu sexo: M - Homem F - Mulher:\n");
    scanf(" %c",&sexo); // A inclusão do espaço antes de %c faz com que o scanf ignore espaços em branco, como o \n, antes de ler o próximo caractere
    
    ano_alistamento = nascimento + 18;
    atual = 2024;
    idade = atual - nascimento;


if (sexo == 'M' || sexo == 'm'){
    if (idade == 18)
        printf("Voce esta com %d anos e ira se alistar este ano!",idade);
        else    
            if (idade < 18)
                printf("Voce esta com %d ano e ira se alistar no ano de %d",idade, ano_alistamento);
                else
                    printf("Voce esta com %d ano e ja deveria ter se alistado no ano de %d",idade, ano_alistamento); }
else{
    if (sexo == 'F'|| sexo == 'f')
        printf("Mulheres nao precisam se alistar.");
       else
            printf("Digite uma resposta valida");}
    
    return 0;
}