#include <stdio.h>

int main(){
    int A,B;

    printf("Valor A antes da troca:");
    scanf("%d",&A);

    printf("Valor de B antes da troca:");
    scanf("%d",&B);

    A = A + B;
    B = A - B;
    A = A - B;
    
    printf("Valor de A depois da troca:%d",A);
    printf("Valor de B depois da troca:%d",B);

}