#include <stdio.h>

int main() {
    int v[10], cont;
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Numeros nao repetidos: ");
    for (int i = 0; i < 10; i++) {
        cont = 0;
        for (int j = 0; j < 10; j++) {
            if (v[i] == v[j]) cont++;
        }
        if (cont == 1)
            printf("%d ", v[i]);
    }
    return 0;
}

