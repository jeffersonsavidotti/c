#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    do{
        printf("\n*** Menu de opções ***\n");
        printf("[1] Mamão \n");
        printf("[2] Abacaxi \n");
        printf("[3] Laranja \n");
        printf("Escolha uma opção ");
        scanf("%i", &op);
    } while (op != 1 && op != 2 && op != 3);
        switch (op){
            case 1: printf("Você escolheu mamão \n");
            break;
            case 2: printf("Você escolheu abacaxi \n");
            break;
            case 3: printf("Você escolheu laranja \n");
            break;
    }

}
