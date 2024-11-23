#include <stdio.h>
#include <stdbool.h>

int soma(int a, int b){ //Função soma
    int somados;
    somados = a + b;
    return(somados);
}

void tela(void){ //Função menu tela
    printf("--------ESCOLHA-------\n");
    printf("[1]------------Somar\n");
    printf("[2]------Multiplicar\n");
    printf("[3]------------Maior\n");
    printf("[4]----Novos-Numeros\n");
    printf("[5]-------------Sair\n");
}

int main(){

    int opcao, valor1, valor2;
    int souma;
    int maior = 0;

    printf("Entre com o primeiro numero\n"); //Entrada Valor1
    scanf("%d",&valor1);

    printf("Entre com o segundo numero\n"); //Entrada Valor2
    scanf("%d",&valor2);

while(1){ //Enquanto "true"

    tela();

    printf("Digite sua opcao:\n"); //Entrada dos dados dentro do loop para garantir que ele nao seja infinito
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            souma = soma(valor1, valor2);
            printf("A soma foi : %d\n",souma);
            break;
        case 2:
            printf("Valores multiplicados = %d\n",valor1 * valor2);
            break;   
        case 3: 
            if(valor1 > valor2){
                maior = valor1;}
            else{
                maior = valor2;}
            printf("O maior valor foi %d\n",maior);
            break;
        case 4:
            printf("Insira novos valores\n");
            scanf("%d",&valor1);
            scanf("%d",&valor2);
            break;
        case 5:
            printf("Fim do programa\n");
            return 0;
        default:
            printf("Opcao invalida. Porfavor digite uma das opcoes.\n");
            break;        
        }
    }
}
