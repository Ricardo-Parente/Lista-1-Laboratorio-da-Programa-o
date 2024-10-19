#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero na base decimal:");
    scanf("%d",&num);
    printf("\n em octal e %#o\n",num);
    printf("\n em hexadecimal e %#x\n",num);
    return 0;
}