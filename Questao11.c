#include <stdio.h>

int main() {
    int v[10], cont;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < 10; i++) {
        cont = 0;
        for (int j = 0; j < 10; j++)
            if (v[i] == v[j])
                cont++;
        printf("O numero %d aparece %d vezes.\n", v[i], cont);
    }
    return 0;
}
