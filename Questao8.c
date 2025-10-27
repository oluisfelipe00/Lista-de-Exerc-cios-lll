#include <stdio.h>

int main() {
    int v[10], maior, menor, iMaior = 0, iMenor = 0;

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
        if (i == 0) { maior = menor = v[i]; }
        if (v[i] > maior) { maior = v[i]; iMaior = i; }
        if (v[i] < menor) { menor = v[i]; iMenor = i; }
    }

    printf("Maior valor %d no indice %d\n", maior, iMaior);
    printf("Menor valor %d no indice %d\n", menor, iMenor);
    return 0;
}

