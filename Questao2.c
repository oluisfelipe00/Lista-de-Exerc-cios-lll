#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a; a = b; b = temp;
    }

    for (int i = a + 1; i < b; i++)
        printf("%d ", i);
    return 0;
}

