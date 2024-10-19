#include <stdio.h>
#include <math.h>

int main(){
    int x,n,mut,pot;
    
    printf("Valor de x:");
    scanf("%d",&x);

    printf("Valor de n:");
    scanf("%d",&n);

    pot = pow(2,n);
    mut = x * pot;

    printf("Valor da multiplicacao:%d",mut);
    return 0;
}