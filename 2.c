#include <stdio.h>

int main(){
    double real;
    printf("Valor do real:");
    scanf("%lf", &real);
    printf("Valor do real com uma casa decimal:%0.1lf\n",real);
    return 0;
}