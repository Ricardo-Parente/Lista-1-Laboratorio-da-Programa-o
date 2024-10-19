#include <stdio.h>

int main(){
    double altura,peso;
    int sexo,masculino = 0,feminino = 1;

    printf("Altura da pessoa:");
    scanf("%lf",&altura);

    printf("Sexo da pessoa:");
    scanf("%d",&sexo);

    if (sexo == masculino){
        peso = ((72.7*altura) - 58.0);
        printf("peso ideal:%lf",peso);
    }
    else if (sexo == feminino){
        peso = ((62.1*altura) - 44.7);
        printf("peso ideal:%lf",peso);
    }
    return 0;
}