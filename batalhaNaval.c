#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro [5][5];

    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            tabuleiro[l][c] = 0;
        }
    }

    //navio 1 vertical
    tabuleiro[1][2] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[3][2] = 1;

    //navio 2 horizontal
    tabuleiro[4][0] = 2;
    tabuleiro[4][1] = 2;
    tabuleiro[4][2] = 2;
    
    printf("coordenadas dos navios:\n");
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            if (tabuleiro [l][c] == 1) {
                printf ("navio vertical - (%d, %d)\n", l, c);
            }
            else if (tabuleiro [l][c] == 2 ) {
                printf("navio horizontal - (%d, %d)\n", l, c);
            }
        }
    }
 
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
