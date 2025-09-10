#include <stdio.h>

#include <stdlib.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro [10][10];

    int habilidade[5][5];

    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
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

    //incremento nivel aventureiro

    //navio 3 diagonal
     tabuleiro[5][5] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;

    //navio 4 diagonal
     tabuleiro[7][2] = 4;
    tabuleiro[8][1] = 4;
    tabuleiro[9][0] = 4;
    
    printf("coordenadas dos navios:\n");
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            if (tabuleiro [l][c] == 1) {
                printf ("navio vertical - (%d, %d)\n", l, c);
            }
            else if (tabuleiro [l][c] == 2 ) {
                printf("navio horizontal - (%d, %d)\n", l, c);
            }
            else if (tabuleiro [l][c] == 3) {
                if (l == c ) {
                    printf ("navio diagonal 1 - (%d, %d)\n", l, c);
                }
                else if (l + c == 9) {
                    printf ("navio diagonal 2 - (%d, %d)\n", l, c);

                } else {
                    printf ("navio diagonal (outro) - (%d, %d)\n", l, c);
                }
            }
        }
    }


 
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf ("\n Tabuleiro: \n");
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            if (tabuleiro [l][c] == 0) {
                printf ("0");
            } else {
                printf ("3");
            }
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    //habilidades
    printf("\n habilidade cone\n");

   //responsavel por zerar a matriz
    for (int l = 0; l <5; l++) {
        for (int c = 0; c < 5; c++) {
            habilidade[l][c] = 0;
        }
    }

    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 5; c++) {
            if (c >= 2 - l && c <= 2 + l ) {
                habilidade[l][c] = 1;
            }
        }
    }
     //responsavel por exibir a matriz
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            printf("%d", habilidade[l][c]);
        }
        printf("\n");
    }
    //-------------//

    printf("\n habilidade cruz \n");

    for (int l = 0; l <5; l++) {
        for (int c = 0; c < 5; c++) {
            habilidade[l][c] = 0;
        }
    }

    for (int l = 0; l < 5; l++) {
        habilidade[2][l] = 1;
        habilidade[l][2] = 1;
    }
    // -----------//
     for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            printf("%d", habilidade[l][c]);
        }
        printf("\n");
    }

    printf("\n habilidade octaedro \n");

    for (int l = 0; l <5; l++) {
        for (int c = 0; c < 5; c++) {
            habilidade[l][c] = 0;
        }
    }

    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            if (abs (l - 2) + abs(c - 2) <= 2) {
                habilidade[l][c] = 1;
            }
        }
    }

    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++ ) {
            printf("%d", habilidade[l][c]);
        }
        printf("\n");
    }

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
