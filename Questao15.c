#include <stdio.h>

int main() {
    int matriz[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        matriz[2][i] = 1; 
        matriz[i][2] = 1; 
    }

    printf("Matriz 5x5 com cruz central:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
