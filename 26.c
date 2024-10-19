#include <stdio.h>
#include <math.h>

int main(){
    float num1,num2,num3,aritmetica,geometrica;

    printf("Numero 1:");
    scanf("%f",num1);

    printf("Numero 1:");
    scanf("%f",num1);

    printf("Numero 1:");
    scanf("%f",num1);

    aritmetica = (num1 + num2 + num3) / 3;
    geometrica = pow(num1 * num2 * num3, 1/3);

    printf("Media aritmetica:%0.2f\n",aritmetica);
    printf("Media geometrica:%0.2f\n",geometrica);

    return 0;
}