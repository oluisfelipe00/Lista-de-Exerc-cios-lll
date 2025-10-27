#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int i, j, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0, j = strlen(palavra) - 1; i < j; i++, j--) {
        if (tolower(palavra[i]) != tolower(palavra[j])) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo)
        printf("Eh um palindromo!\n");
    else
        printf("Nao eh um palindromo.\n");

    return 0;
}
