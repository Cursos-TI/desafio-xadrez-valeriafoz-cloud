#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.

int main(){
// Movimentação do Bispo = cinco casas na diagonal para cima e à direita.

    for(int bispo = 0; bispo < 5; bispo++){
        printf("Direita\n Cima\n");
    }

// Movimentação da Torre = cinco casas para a direita.
int torre = 0;
while (torre < 5){
        printf("Direita\n");
        torre++;
    }

// Movimentação da Rainha = oito casas para a esquerda.
int rainha = 0;
   
    do {
        printf("Direita\n");
        rainha++;
    } while (rainha < 8);

return 0;

}