#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("arq2.txt", "w+");
    int caracteres = 0;
    char c;
    while ((c = fgetc(arquivo)) != EOF) if (c == 'a') caracteres++;
    fclose(arquivo);
    printf("%d CARACTERES", caracteres);
}