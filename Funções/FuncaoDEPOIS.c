#include <stdio.h>
#include <stdlib.h>

int escolha(); //Prototipo da funcao que esta por vir

int main(){

    int escolhido;

    escolhido = escolha();

    printf("\nResultado = %d\n",escolhido);
    return 0;
}

// Definição da funcao
int escolha(){
    char opcao;
    int a, b, retorno;

    while(1){
        // Bloco de leitrua da escolha
        printf("'+' para soma\n'-' para subtrair\n'*' para multiplicar\n'/' para dividir\n"); 
        printf("Digite '0' para sair.\n");
        scanf(" %c",&opcao);

        // Bloco de leitura dos valores
        printf("Insira respetivamente os valores de a e b:\n");
        scanf("%d%d",&a,&b);


        switch(opcao){
            case '+':
                retorno = a+b;
                printf("A soma vale = %d\n",retorno);
                break;
            
            case '-':
                retorno = a-b;
                printf("A subtracao vale = %d\n",retorno);
                break;
            
            case '*':
                retorno = a*b;
                printf("A multiplicacao vale = %d\n",retorno);
                break;
            
            case '/':
                retorno = a/b;
                printf("A divisao vale = %d\n",retorno);
                break;
            
            case '0':
                return 0;
                break;
                
            
            default:
                printf("\nDigite uma opção valida\n");                        
        }
    
    }
    return (retorno);
}   