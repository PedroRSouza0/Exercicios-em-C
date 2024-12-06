#include <stdio.h>
#include <ctype.h>

int main(void){
    int value, c50 = 0, c20 = 0, c10 = 0, c1 = 0;
    char option;

    while(1){
        printf("How much do you want to withdraw?\n");
        scanf("%d",&value);

         c50 = value / 50;  // Número de cédulas de 50
        value = value % 50; // Atualiza o valor restante

        c20 = value / 20;  // Número de cédulas de 20
        value = value % 20; // Atualiza o valor restante

        c10 = value / 10;  // Número de cédulas de 10
        value = value % 10; // Atualiza o valor restante

        c1 = value;  

    printf("You used %d 50 Banknotes\n",c50);
    printf("You used %d 20 Banknotes\n",c20);
    printf("You used %d 10 Banknotes\n",c10);
    printf("You used %d 1 Banknotes\n",c1);

        printf("Do you want to continue?[Y/N]\n");
        scanf(" %c",&option); 
        if (toupper(option) == 'N')
            break;              
    }
    printf("END\n");
    return 0;
}