#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    do{
        printf("\n*** Menu de op��es ***\n");
        printf("[1] Mam�o \n");
        printf("[2] Abacaxi \n");
        printf("[3] Laranja \n");
        printf("Escolha uma op��o ");
        scanf("%i", &op);
    } while (op != 1 && op != 2 && op != 3);
        switch (op){
            case 1: printf("Voc� escolheu mam�o \n");
            break;
            case 2: printf("Voc� escolheu abacaxi \n");
            break;
            case 3: printf("Voc� escolheu laranja \n");
            break;
    }

}
