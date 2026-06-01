#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.

int main(){
// Movimentação do Bispo = cinco casas na diagonal para cima e à direita.

    for(int bispo = 0; bispo < 5; bispo++){
        printf("Direita\n Cima\n");
    }
printf("\n");

// Movimentação da Torre = cinco casas para a direita.
int torre = 0;
while (torre < 5){
        printf("Direita\n");
        torre++;
    }
printf("\n");
// Movimentação da Rainha = oito casas para a esquerda.
int rainha = 0;
   
    do {
        printf("Direita\n");
        rainha++;
    } while (rainha < 8);

printf("\n");

// Movimentação do Cavalo = duas para baixo, uma para a esquerda.

int cavalo = 1;

while (cavalo--)
{
    for (int cavalo2 = 0; cavalo2 < 2; cavalo2++){
        printf("Baixo\n");
    }
    printf("Esquerda\n");
}


return 0;

}