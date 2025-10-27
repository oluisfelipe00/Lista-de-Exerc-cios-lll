#include <stdio.h>

int main() {
    int n, num, somaPar = 0, somaImpar = 0;
    printf("Quantos numeros vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 == 0) somaPar += num;
        else somaImpar += num;
    }

    printf("Soma dos pares = %d\nSoma dos impares = %d\n", somaPar, somaImpar);
    return 0;
}
