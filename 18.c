#include <stdio.h>

int main(){
    int i = 0, j = 0, s = 0, l = 0, e = 0, a = 0, r = 0;
    
    printf("largura do retangulo:");
    scanf("%d",&r);
    
    printf("altura do retangulo:");
    scanf("%d",&a);

    for ( j = 0; j < r; j++){
        for (i = 0; i < a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Digite o losango:");
    scanf("%d", &l);
    for ( i = 0; i < l; i++){
        for (j = 0; j < l; j++){
            if ((i+j < (l - 1)/2) || (j - i >= (l+1)/2) || (i + j >= l + (l-1)/2) || (i - j >= (l + 1)/2)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    
}