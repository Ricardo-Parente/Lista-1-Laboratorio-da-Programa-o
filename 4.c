#include <stdio.h>

int main(){
    double x,total;
    printf("Valor da conta:");
    scanf("%lf",&x);
    total = x * (10*x / 100);
    printf("Valor total da conta:%0.2lf",total);
    return 0;
}