#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float e, d, p, a;
    printf("Digite o valor da base do quadrado: ");
    scanf("%f", &e);
    printf("Digite o valor da altura do quadrado: ");
    scanf("%f", &d);
    p = e*d;
    a = d*4;
    printf("A area do quadrado eh:%f e seu perimetro eh:%f", a, p);

}
