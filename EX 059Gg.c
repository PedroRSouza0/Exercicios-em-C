#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
//#include <unistd.h> somente em ambientes UNIX e LINUX

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

    int opcao = 999, valor1, valor2;
    int souma;
    int maior = 0;

    printf("Entre com o primeiro numero\n"); //Entrada Valor1
    scanf("%d",&valor1);

    printf("Entre com o segundo numero\n"); //Entrada Valor2
    scanf("%d",&valor2);

while(opcao != 5){ //Enquanto "true"

    tela();

    printf("Digite sua opcao:\n"); //Entrada dos dados dentro do loop para garantir que ele nao seja infinito
    scanf("%d",&opcao);

    //Abaixo um exemplo de como sair do programa quando usar a condição while(true)

    //while (1) { // Loop infinito
      //  printf("Escolha uma opcao (digite 5 para sair): ");
        //scanf("%d", &opcao);

        //if (opcao == 5) {
          //  printf("Encerrando o programa...\n");
            //break; // Sai do loop
        //}

    switch(opcao){
        case 1:
            souma = soma(valor1, valor2);
            printf("A soma foi : %d\n",souma);
            break;
        case 2:
            printf("Valores multiplicados = %d\n",valor1 * valor2);
            break;   
        case 3: // Fazer verificação para os valores iguais
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
            printf("Saindo...\n");
            Sleep(2000); //Valor em Milisegundos (2000 == 2segundos)
            printf("Fim do programa\n");
            break;
        default:
            printf("Opcao invalida. Porfavor digite uma das opcoes.\n");
            break;        
        }
    }
    printf("\nMuito Obrigados por usar o programa!\n");
    return 0;
}
