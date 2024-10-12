#include <stdio.h>
#include <stdlib.h>

int opcao(){
    char op;
    int resultado;
    int a, b;
    while(1){
    
        printf("'+' para soma\n'-' para subtrair\n'*' para multiplicar\n'/' para dividir\n");
        scanf(" %c",&op); //Quando scanf for ler char sempre dar um espaço antes

        switch(op){
            case '+':
            
                printf("Insira os valores:\n");
                scanf("%d%d",&a,&b);
                resultado = a + b;
                printf("Resultado = %d\n",resultado);
                break;
            case '-':
            
                printf("Insira os valores:\n");
                scanf("%d%d",&a,&b);
                 resultado = a - b;
                printf("Resultado = %d\n",resultado);
                break;
            case '*':
                printf("Insira os valores:\n");
                scanf("%d%d",&a,&b);
                 resultado = a * b;
                printf("Resultado = %d\n",resultado);
                break;
             case '/':
                printf("Insira os valores:\n");
                scanf("%d%d",&a,&b);
                resultado = a / b;
                printf("Resultado = %d\n",resultado);
                break;   
            default:
                printf("Digite um valor valido\nFim do programa");
                return 0;
                

        }
    }
    return(resultado);
}    
int main(){
    
    
   int jogo = opcao();

    printf("\nFinal = %d",jogo);

    return 0;
    
}