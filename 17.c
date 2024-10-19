#include <stdio.h>
int main(){
    float raio,diametro,comprimento,area,pi = 3.14159;
    
    printf("Valor do raio do circulo:");
    scanf("%f",&raio);
    
    diametro = raio * 2;
    comprimento = 2 * pi * raio;
    area = pi * raio * raio;
    
    printf(" Valor do diametro do circulo:%f", diametro);
    
    printf(" Valor do comprimento do circulo:%f", comprimento);
    
    printf(" Valor da area do circulo:%f", area);
}