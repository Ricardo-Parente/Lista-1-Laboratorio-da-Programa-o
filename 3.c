#include <stdio.h>

int main(){    
    int x,triplo,quadrado,metade;
    
    printf("Valor do inteiro:");
    scanf("%d",&x);
    
    triplo = x * 3;
    quadrado = x * x;
    metade = x / 2;
    
    printf("Valor do triplo de x:%d",triplo);
    
    printf("Valor do quadrado de x:%d",quadrado);
    
    printf("Valor da metade de x:%d",metade);
    return 0;
}