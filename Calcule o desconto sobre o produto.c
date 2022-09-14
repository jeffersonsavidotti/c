#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float vm, vd, desc, pd;
    printf("Valor da mercadoria: ");
    scanf("%f", &vm);
    printf("Valor do desconto em porcentagem: ");
    scanf("%f", &vd);
    desc=vm*(vd/100);
    pd=vm-desc;
    printf("Preco com desconto eh:%.2f", pd);

}
