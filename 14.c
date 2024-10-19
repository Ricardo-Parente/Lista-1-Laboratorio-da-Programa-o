#include <stdio.h>

int main(){
    int dias;
    double valor, liquido,valor1;

    printf("Dias trabalhados:");
    scanf("%d",&dias);
    
    if (dias < 10){
        liquido = 50.25 * dias;
        valor = (liquido * 90) / 100;
        printf("Valor do salario:%lf",valor);
    }
    else if (dias > 10 && dias < 20){
        liquido = 50.25 * dias;
        valor1 = (liquido * 120) / 100;
        valor = (valor1 * 90) / 100;
        printf("Valor do salario:%lf",valor);
    }
    else if (dias >= 20){
    liquido = 50.25 * dias;
    valor1 = (liquido * 130) / 100;
    valor = (valor1 * 90) / 100;
    printf("Valor do salario:%lf",valor);
    }

}