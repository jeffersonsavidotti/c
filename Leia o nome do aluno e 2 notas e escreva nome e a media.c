#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float nota1, nota2, media;
    printf("Informe o nome do aluno: ");
    gets(nome); //OU scanf("%s", &nome);
    printf("Informe as duas notas: ");
    scanf("%f%f", &nota1, &nota2);
    media = (nota1+nota2)/2;
    printf("O aluno %s ficou com media %.2f", nome, media);


}
