#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[30], inverte[30];
    int i, tamanho;


    printf("Insira a string desejada:");
    scanf("\n%s",nome);

    tamanho = strlen(nome); //Mede o tamanho da string

    for(i = 0; i < tamanho; i++){

        inverte[i] = nome[tamanho - 1 - i]; 

    }
    
    inverte[tamanho] = '\0'; // Adiciona no último espaço o terminador de string, já que em nossa operação lógica estamos o tempo todo fugindo dele

    printf("\nString invertida: %s ",inverte);
    
    return 0;
}