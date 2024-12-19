#include <stdio.h>

int main(){
    int num;

    while(1){
        printf("Digite um numero para a tabuada [Digite um numero negativo para sair]\n");
        scanf("%d",&num);

        if(num < 0)
            break;

        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n",num,i,num*i);
        }    
    }
    return 0;
}