#include <stdio.h>

int main() {
    int v1[5], v2[5], resultado = 0;

    printf("Digite os 5 valores do primeiro vetor:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &v1[i]);

    printf("Digite os 5 valores do segundo vetor:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &v2[i]);

    for (int i = 0; i < 5; i++)
        resultado += v1[i] * v2[i];

    printf("Produto escalar = %d\n", resultado);
    return 0;
}
