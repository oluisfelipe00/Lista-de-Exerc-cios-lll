#include <stdio.h>

int main() {
    int m[3][3];
    int somaLinha[3] = {0}, somaColuna[3] = {0}, diag1 = 0, diag2 = 0;

    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            somaLinha[i] += m[i][j];
            somaColuna[j] += m[i][j];
            if (i == j) diag1 += m[i][j];
            if (i + j == 2) diag2 += m[i][j];
        }

    int magico = 1, ref = somaLinha[0];
    for (int i = 0; i < 3; i++)
        if (somaLinha[i] != ref || somaColuna[i] != ref)
            magico = 0;

    if (diag1 != ref || diag2 != ref) magico = 0;

    if (magico)
        printf("É um quadrado mágico!\n");
    else
        printf("Não é um quadrado mágico.\n");

    return 0;
}
