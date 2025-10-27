#include <stdio.h>

int main() {
    int n, cont = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int temp = n;
    do {
        cont++;
        temp /= 10;
    } while (temp != 0);
    printf("O numero %d tem %d digitos.\n", n, cont);
    return 0;
}
