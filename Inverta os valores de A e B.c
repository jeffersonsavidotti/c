#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, aux;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    aux = a;

    a = b;

    b = aux;

    printf("O valor de A é = %.2f e valor de B é = %.2f", a, b);


}
