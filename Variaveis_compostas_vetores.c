#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int i, e = 0;
    float notas[5], media = 0, soma = 0;
    printf("\n*****PROGRAMA LAN�AMENTO DE NOTAS*****\n");

    printf("\n*****INFORME AS NOTAS*****\n");
    for (i=0; i<5; i++){
        printf("Digite uma nota: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    printf("\n*****ALUNOS E NOTAS*****\n");
        for (i=0; i<5; i++){
        e = e + 1;
        printf("Aluno n�: %i  recebeu nota: %.2f \n", e, notas[i]);
        }
    printf("\n*****M�DIA*****\n");
    media = soma/5;
    printf("\n A m�dia �: %.2f \n", media);

}
