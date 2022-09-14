#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float media;
    int n1, n2, n3, n4;
    printf("Digite 4 numeros inteiros, um por vez e aperte enter: ");
    scanf("%i%i%i%i", &n1, &n2, &n3, &n4);
    media=(n1+n2+n3+n4)/4;
    printf("A média é: %.2f", media);

}
