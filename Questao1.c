#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int vogais = 0, consoantes = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        char c = tolower(palavra[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vogais++;
            else
                consoantes++;
        }
    }

    printf("Vogais: %d\nConsoantes: %d\n", vogais, consoantes);
    return 0;
}
