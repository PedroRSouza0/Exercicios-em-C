#include <stdio.h>

int main(){

    int vetA[10], vetB[10];
    int i;

    printf("Digite 10 valores:\n");
    for(i = 0; i <= 9; i++){    // Entrando os dados em A
        scanf("%d \n",&vetA[i]);

    }

    for(i = 0; i <= 9; i++){    // Atríbuindo os dados em B
        vetB[i] = vetA[i] * 10;
        printf("vetB[%d] = %d \n",i,vetB[i]); // Saída dos dados
    }
    
    return 0;
}