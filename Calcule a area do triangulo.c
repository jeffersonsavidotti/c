#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float b, h, a;
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &b);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &h);
    a = b*h/2;
    printf("A area do triangulo é:%.2f", a);

}

