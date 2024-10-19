#include <stdio.h>

int main(){
    double volume, comprimento;
    double largura, altura;
    printf("Valor do comprimento:");
    scanf("%lf", &comprimento);

    printf("Valor da largura:");
    scanf("%lf", &largura);

    printf("Valor da altura:");
    scanf("%lf", &altura);

    volume = comprimento + largura + altura;

    printf("Valor do volume:%0.1lf", volume);
    
}