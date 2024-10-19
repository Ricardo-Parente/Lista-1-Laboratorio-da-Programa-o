#include <stdio.h>

int main(){
    int num1,num2,resto;
    printf(" Valor do primeiro numero:");
    scanf("%d",&num1);

    printf(" Valor do segundo numero:");
    scanf("%d",&num2);

    resto = num1%num2;
    
    printf(" Valor do resto:%d", resto);
}