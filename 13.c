#include <stdio.h>

int main(){
    double F,C;
    
    printf("Graus na escala celsius:");
    scanf("%lf",&C);

    F = (9 * C + 160) / 5;

    printf("Valor convertido na escala fahrenheit:%0.1lf",F);
}