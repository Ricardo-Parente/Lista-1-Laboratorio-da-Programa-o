#include <stdio.h>

int main(){
    double num1,num2,mut,resto,quo,soma,sub;
    printf("Valor do primeiro numero:");
    scanf("%lf",&num1);
    printf("Valor do segundo numero:");
    scanf("%lf",&num2);
    mut = num1 * num2;
    quo = num1 / num2;
    soma = num1 + num2;
    sub = num1 - num2;
    resto = num1 - (quo * num2);
    printf("Valor da multiplicaçao:%0.1lf",mut);
    printf("Valor do quociente:%0.1lf",quo);
    printf("Valor da soma:%0.1lf",soma);
    printf("Valor da diferença:%0.1lf",sub);
    printf("Valor do resto:%0.1lf",resto);
}