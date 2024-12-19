#include <stdio.h>
#include <stdlib.h>

int escolha(){
    char opcao;
    float a, b, resultado;

    while(1){
        printf("Digite um dos 4 operadores aritimeticos para realizar a operação\nou digite 's' para sair\n");
        scanf(" %c",&opcao);

        if(opcao == '+'){
            printf("Digite os valores:\n");
            scanf("%f%f",&a,&b);
            resultado = a + b;
            printf("Soma = %.1f",resultado);
        }
        else{
            if(opcao == '-'){
                printf("Digite os valores:\n");
            scanf("%f%f",&a,&b);
            resultado = a - b;
            printf("SUB = %.1f",resultado);
            }
        }
    }
    return (resultado);
}