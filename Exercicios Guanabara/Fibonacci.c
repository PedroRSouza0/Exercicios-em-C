#include <stdio.h>

int main(){

    int n, t1 = 0, t2 = 1, i = 3, t3;

    printf("Insira o valor de n\n"); //Tamanho da sequencia
    scanf("%d",&n);

    printf("%d %d ",t1,t2);
    
while(i <= n){
    t3 = t1 + t2;
    printf("%d ",t3);
    t1 = t2;
    t2 = t3;
    i++;
}

    printf("\nFIM");
    return 0;
}