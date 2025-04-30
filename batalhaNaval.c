#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void exibirTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[LINHAS][COLUNAS];

    // Inicializa o tabuleiro com água
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '~'; // '~' representa água
        }
    }

    // Posicionamento dos navios
    int navio1X = 2, navio1Y = 3; // Posição inicial do navio vertical
    int navio2X = 5, navio2Y = 6; // Posição inicial do navio horizontal

    // Navio vertical (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1X + i][navio1Y] = 'N'; // 'N' representa um navio
    }

    // Navio horizontal (tamanho 4)
    for (int i = 0; i < 4; i++) {
        tabuleiro[navio2X][navio2Y + i] = 'N';
    }

    // Exibe o tabuleiro atualizado
    exibirTabuleiro(tabuleiro);

    // Exibição das coordenadas dos navios
    printf("\nCoordenadas dos Navios:\n");

    printf("Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navio1X + i, navio1Y);
    }

    printf("\nNavio Horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", navio2X, navio2Y + i);
    }

    return 0;
}