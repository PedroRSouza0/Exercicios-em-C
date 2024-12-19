#include <stdio.h> //Validação de Dados

int main(void){
    char sexo = ' '; //Pra começar o laço while

    while(sexo != 'M' && sexo != 'F'){ //Condição &&, pois uma variavel não pode ter dois valores diferentes dentro dela
        
        printf("Digite seu sexo:[M/F]\n");//Entrada dos dados
        scanf(" %c",&sexo);

        if(sexo != 'M' && sexo != 'F') //Validação dos dados
            printf("Resposta invalida. Tente novamente\n");      
    }

    printf("Sexo %c registrado com sucesso!",sexo); // Executada quando o laço while se torna falso

    return 0;
}