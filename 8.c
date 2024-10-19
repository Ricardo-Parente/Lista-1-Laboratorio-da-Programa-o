#include <stdio.h>

int main(){
    int x,y,z;
    printf("Valor do inteiro:");
    scanf("%d",&x);

    y = x + 1;
    z = x - 1;

    printf("Sucessor:%d",y);
    printf("Antecessor:%d",z);

    return 0;
}