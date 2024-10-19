#include <stdio.h>

int main(){
    double cot, dolar, real;
    
    printf("Valor da cotação:");
    scanf("%lf", &cot);

    printf("Valor em reais:");
    scanf("%lf",&real);

    dolar = real / cot;
    printf("Valor em dolar:%0.1lf",dolar);
}