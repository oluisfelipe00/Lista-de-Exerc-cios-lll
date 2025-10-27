#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[50];
    srand(time(NULL));

    for (int i = 0; i < 50; i++) {
        v[i] = rand() % 20; 
        printf("%d ", v[i]);
    }

    printf("\nUnicos: ");
    for (int i = 0; i < 50; i++) {
        int repete = 0;
        for (int j = 0; j < i; j++) {
            if (v[i] == v[j]) { repete = 1; break; }
        }
        if (!repete)
            printf("%d ", v[i]);
    }
    return 0;
}

