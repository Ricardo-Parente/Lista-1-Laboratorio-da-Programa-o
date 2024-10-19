#include <stdio.h>

int main(){
    int seg1, seg2, seg3, seg4, min, hrs;
    printf("Segundos:");
    scanf("%d",&seg1);

    printf("Minutos:");
    scanf("%d",&min);

    printf("Horas:");
    scanf("%d",&hrs);

    seg2 = min * 60;
    seg3 = hrs * 3600;
    seg4 = seg1 + seg2 + seg3;

    printf("Segundos totais:%d", seg4);
    
    return 0;
}