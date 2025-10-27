#include <stdio.h>

int main() {
    int v[8], temp;
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 8; i++)
        for (int j = i + 1; j < 8; j++)
            if (v[i] < v[j]) {
                temp = v[i]; v[i] = v[j]; v[j] = temp;
            }

    printf("Ordem decrescente: ");
    for (int i = 0; i < 8; i++) printf("%d ", v[i]);
    return 0;
}
