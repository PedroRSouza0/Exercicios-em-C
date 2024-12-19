#include <stdio.h>
#include <string.h>

int main(void){

    //Somente palavras

    char palavra[30], invertida[30];
    int i, tamanho;

    printf("Digite a sua palavra:\n");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for(i = 0; i < tamanho; i++){
        invertida[i] = palavra[tamanho - 1 - i];
    }

    invertida[tamanho] = '\0';

    if(strcmp(invertida, palavra)== 0)
        printf("Palindromo!");
    else
        printf("Nao palindromo");

    return 0;
}