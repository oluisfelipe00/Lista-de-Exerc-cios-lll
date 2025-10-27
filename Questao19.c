#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int cont = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++)
        if (tolower(palavra[i]) == 'a')
            cont++;

    printf("A letra 'a' aparece %d vezes.\n", cont);
    return 0;
}
