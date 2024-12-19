#include <stdio.h>
#include <stdlib.h>

int main(void){

    int matrizA[3][3];
    int matrizB[3][3];
    int multi[3][3];

    printf("Insira os valores da primeira matriz\n");
    //Entrada dos dados de MatrizA
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("MatrizA[%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    printf("\n**********************");
    printf("\nInsira os dados da segunda matriz\n");

    //Entrada dos dados de MatrizB
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("MatrizB[%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
        
     printf("\n******************\n");
    //Multiplicação e saída dos dados
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            multi[i][j] = matrizA[i][j] * matrizB[i][j];
            printf("\nMulti[%d][%d] = %d\n",i,j,multi[i][j]);
        }

    return 0;
}