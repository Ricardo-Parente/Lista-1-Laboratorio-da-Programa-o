#include <stdio.h>

int main(){
    int seg;
    double hrs,min;
    
    printf("Valor em segundos:");
    scanf("%d",&seg);
    printf("Valor em segundos:%d\n",seg);
    
    hrs = seg / 3600;
    min = seg / 60;

    printf("Valor em horas:%0.1lf\n",hrs);
    printf("Valor em minutos:%0.1lf\n",min);
    
    return 0;
}