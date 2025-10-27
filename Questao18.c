#include <stdio.h>
#include <string.h>

int main() {
    char p1[100], p2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", p1);
    printf("Digite a segunda palavra: ");
    scanf("%s", p2);

    if (strcmp(p1, p2) == 0)
        printf("As palavras sao iguais.\n");
    else
        printf("As palavras sao diferentes.\n");
    return 0;
}
