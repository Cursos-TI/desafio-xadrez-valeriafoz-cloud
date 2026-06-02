#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// Definição de função de movimentos por recursividade:
void torre(int casas1) {
    if (casas1 > 0){
        printf("Direita\n");
        torre(casas1 - 1);
    }
}
void bispo(int casas2) {
    if (casas2 > 0){
        printf("Cima\n");
        printf("Direita\n");
        bispo(casas2 - 1);
    }
}

void rainha(int casas3) {
    if (casas3 > 0){
        printf("Esquerda\n");
        rainha(casas3 - 1);
    }
}

int main(){
// Movimentação do Bispo = cinco casas na diagonal para cima e à direita.
    printf("Bispo:\n");
    bispo(5);
    printf("\n");

// Movimentação da Torre = cinco casas para a direita.
    printf("Torre:\n");
    torre(5);
    printf("\n");

// Movimentação da Rainha = oito casas para a esquerda.
    printf("Rainha:\n");   
    rainha(8);
    printf("\n");

// Movimentação do Cavalo = duas casas para cima e uma para a direita.

int cavalo = 1;

printf("Cavalo:\n");

while (cavalo--)
{
    for (int cavalo2 = 0; cavalo2 < 2; cavalo2++){
        printf("Cima\n");
    }
    printf("Direita\n");
}


return 0;

}