//https://github.com/Cursos-TI/desafio-batalha-naval-mainSpi
#include <stdio.h>

int main() {
    // Definição do tamanho do tabuleiro e declaração
    const int TAMANHO_TABULEIRO = 10;
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicialização do tabuleiro com 0 (vazio)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionamento do primeiro navio, horizontal
    // Navio de tamanho 3, posicionado na linha 2, coluna 3 até coluna 5
    int inicio_navio1_x = 2;
    int inicio_navio1_y = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[inicio_navio1_x][inicio_navio1_y + i] = 3;
    }

    // Posicionamento do segundo navio, vertical
    // Navio de tamanho 3, posicionado na coluna 7, linha 4 até linha 6
    int inicio_navio2_x = 4;
    int inicio_navio2_y = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[inicio_navio2_x + i][inicio_navio2_y] = 3;
    }

    // Exibição do tabuleiro completo
    // O desafio não pedia isso, mas achei legal mostrar o tabuleiro (a matriz) toda
    printf("Tabuleiro de Batalha Naval:\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");  // Cabeçalho das colunas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i);  // Número da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %d", tabuleiro[i][j]);  // Valor da casa
        }
        printf("\n");  // Nova linha após cada linha do tabuleiro
    }
    printf("\n");

    // Exibição das coordenadas dos navios no tabuleiro
    printf("Coordenadas dos navios no tabuleiro:\n");

    // Exibição do primeiro navio (horizontal)
    printf("Navio 1:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte do navio posicionada na casa [%d][%d]\n", inicio_navio1_x, inicio_navio1_y + i);
    }

    // Exibição do segundo navio (vertical)
    printf("\nNavio 2:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte do navio posicionada na casa [%d][%d]\n", inicio_navio2_x + i, inicio_navio2_y);
    }

    return 0;
}