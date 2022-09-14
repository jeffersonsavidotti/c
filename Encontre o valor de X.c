#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, x;

    printf("Digite 3 numeros: ");
    scanf("%f%f%f", &a, &b, &c);

    x=(2*a*b)+(3*a*c)-(4*b*c);
    printf("O valor de X eh: %.2f", x);

}
