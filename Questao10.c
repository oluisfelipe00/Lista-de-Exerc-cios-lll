#include <stdio.h>

int main() {
    int matriz[4][4];

    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);

    for (int i = 0; i < 4; i++) {
        int maior = matriz[i][0];
        for (int j = 1; j < 4; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        printf("Maior valor da linha %d = %d\n", i + 1, maior);
    }
    return 0;
}
