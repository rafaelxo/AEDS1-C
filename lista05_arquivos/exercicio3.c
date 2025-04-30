#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("arq2.txt", "r");
    int caracteres = 0;
    char caracter;
    while ((caracter = fgetc(arquivo)) != EOF) if (caracter == 'a') caracteres++;
    fclose(arquivo);
    printf("%d CARACTERES", caracteres);
}