#include <stdio.h>
#include <string.h>

struct Pessoas {
    char nome[20];
    int idade;
    char sexo;
};

int main(){

    struct Pessoas p;

    float mediai = 0;
    char hmaior[20]; int veio = 0;
    int totalF = 0;

    for(int i = 1; i <= 4; i++){
        printf("\nPESSOA [%d]\n",i);

        printf("Digite o seu nome\n");
        scanf(" %s",p.nome);

        printf("Digite a sua idade:\n");
        scanf("%d",&p.idade);

        mediai += p.idade;

        printf("Digite o seu sexo: ['M' para masculino / 'F' para feminino]\n");
        scanf(" %c",&p.sexo);

    if((p.sexo == 'F' ||p.sexo == 'f') && p.idade < 21)
        totalF++;

         if(veio < p.idade && (p.sexo == 'M' || p.sexo == 'm')){
            veio = p.idade;
            strcpy(hmaior, p.nome);
            }
    }

    printf("O Homem mais velho foi o %s com %d anos\n",hmaior, veio);
    printf("Media = %.1f\n",mediai/4);  
    printf("Total de mulheres com menos de 21 anos = %d\n",totalF); 

    return 0;
}
