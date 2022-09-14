#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0, soma = 0, jogadores[10], num_c = 0, num_j = 0, cam = 1;

    for (i=0; i<10; i++){
        printf("Digites o numero da camisa do jogador nº%d: ", cam);
        scanf("%d", &jogadores[i]);
        num_c = num_c + jogadores[i];
        cam = cam + 1;

    }
        for (i=0; i<10; i++){
            soma = soma + 1;
            num_j = num_j + 1;
            printf("\nJogador %d de camisa: %.2d \n", num_j, jogadores[i]);
        }
        printf("\nEsta é o número de jogadores: %d e esta é a soma dos numeros das camisetas: %d\n", soma, num_c);

}
