#include <stdio.h>
#include <ctype.h>

int main(void){
    int idade;
    char sexo = ' ', opcao;
    int total18 = 0, totalh = 0, total20 = 0;

    printf("\nDATA ANALYSE GROUP\n");

    while(1){
        //Age's Input
        printf("Input the person's age\n");
        scanf("%d",&idade);
        
        //Genre's Input
        while(tolower(sexo) != 'm' && tolower(sexo) != 'w'){
            printf("What is your genre?[W/M]\n");
            scanf(" %c",&sexo);
            }

        if(sexo == 'm' || sexo == 'M')
            totalh++;
        if(idade > 18)
            total18++;
        if((sexo == 'w' || sexo == 'W') && idade < 20)
            total20++;

        printf("Do you want to continue?[Y/N]\n");
        scanf(" %c",&opcao);

        if(opcao == 'n' || opcao == 'N')
            break;  

        sexo = ' ';          
    }
    //Output
    printf("The total of people older than 18 years is %d\n",total18);
    printf("The total of mans registred is %d\n",totalh);
    printf("And the total of womans yungest than 20 years is %d",total20);
    return 0;
}