#include <stdio.h>
#include <string.h>

int main(){

    char nome1[15], nome2[15] = "Julio";

    printf("Insira o nome1: \n");
    scanf("%s",&nome1);

    printf("Nome2 = %s \n",nome2);

    strcpy(nome2,nome1); // Copia o valor de uma string e endereça em outra variavel.

    printf("Nome1 = %s",nome1);
    printf("\nNome2 = %s",nome2);

    return 0;

}