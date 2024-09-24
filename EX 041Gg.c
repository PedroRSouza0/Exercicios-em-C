#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano_nascimento, idade, atual = 2024;

    printf("Digite o ano em que voce nasceu:\n");
    scanf(" %d",&ano_nascimento);

    idade = atual - ano_nascimento;

if (idade <= 9)
    printf("MIRIM");
    else
        if (idade > 9 && idade <= 14)
            printf("INFANTIL");
            else
                if (idade > 14 && idade <= 19)
                    printf("JUNIOR");
                    else
                        if (idade == 20)
                            printf("SENIOR");
                            else
                                printf("MASTER");

                
    return 0;            
}