#include <stdio.h>

int main(){
    double hrs,val1,salario,percentual,val2;
    printf("Valor da hora:");
    scanf("%lf",&val2);
    
    printf("Horas trabalhadas:");
    scanf("%lf",&hrs);
    
    printf("Valor do percentual do INSS:");
    scanf("%lf",&percentual);

    val1 = val2 * hrs;
    printf("Valor do salario bruto:%0.1lf",val1);

    salario = (val1 * percentual) / 100;
    printf("Valor do salario liquido:%0.1lf",salario); 
}