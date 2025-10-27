#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma, maiorSoma = 0, linhaMaior = 0;

    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    for (int i = 0; i < 3; i++) {
        soma = 0;
        for (int j = 0; j < 3; j++)
            soma += matriz[i][j];

        if (i == 0 || soma > maiorSoma) {
            maiorSoma = soma;
            linhaMaior = i;
        }
    }

    printf("A linha com maior soma é a %d (soma = %d)\n", linhaMaior + 1, maiorSoma);
    return 0;
}
