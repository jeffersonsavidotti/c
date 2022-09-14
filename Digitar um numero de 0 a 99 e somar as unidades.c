#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int valor, dezena, unidade, soma;
    printf("Digite um numero inteiro de 0 a 99: ");
    scanf("%i", &valor);
    dezena = (valor /10); // DIVISÃO DO VALOR POR 10
    unidade = (valor %10); //RESTO DA DIVISÃO
    soma = (dezena + unidade);
    printf("A soma das unidades = %i", soma);

}
