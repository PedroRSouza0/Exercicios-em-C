#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char product[100], cheap[100] = "", option;
    float price, cheapp = 999999, sum = 0;
    int total100 = 0;


    while(1){
        //Input of product's name
        printf("Input the product's name:\n");
        scanf(" %s",&product);

        //Price's Input
        printf("Input the price of it $:\n");
        scanf("%f",&price);

        sum += price;

        if(price > 1000)
            total100++;

        if(price < cheapp)
            strcpy(cheap, product);

        printf("Do you want to continue?[Y/N]\n");
        scanf(" %c",&option);

        if(toupper(option) == 'N')
            break;
    }
    printf("FEEDBACK\n");
    printf("Total spend: %.2f\n",sum);
    printf("Total of products that cost more than $1000: %d\n",total100);
    printf("The most cheap product: %s",cheap);
    return 0;
}