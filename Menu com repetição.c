#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, a, b;
    do{
        printf("\n*** Menu de op��es ***\n");
        printf("[1] Ol�, mundo! \n");
        printf("[2] Somar dois numeros \n");
        printf("[0] Sair do programa \n");
        printf("Escolha uma op��o ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1: printf("Ol�, mundo! \n");
            break;
            case 2: printf("Digite os dois valores a serem somados: ");
            scanf("%i%i", &a, &b);
            printf("Soma: %d \n", a+b);
            break;
            case 0: printf("\nPrograma finalizado. Tchau! \n");
            break;
        }
        system("pause"); //ou getch()
        system("cls"); //limpa a tela
    }while (opcao != 0);
}
