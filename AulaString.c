#include <stdio.h>

int main(){

    char produto[] = "Pedro";

    for(int i = 0; produto[i] != '\0'; i++){
       printf("Valor do elemento da string numero %d = %c \n",i,produto[i]);
    }

    return 0;


}