#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,y1,y2,d;
    
    printf("Valor da coordenada x1:");
    scanf("%lf",&x1);
    
    printf("Valor da coordenada y1:");
    scanf("%lf",&y1);
    
    printf("Valor da coordenada x2:");
    scanf("%lf",&x2);
    
    printf("Valor da coordenada y2:");
    scanf("%lf",&y2);

    d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    printf("Valor da distancia:%0.2lf\n",d);

    return 0;
}