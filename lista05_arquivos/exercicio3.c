#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int caracteres = 0;
    char caracter;
    FILE *arquivo = fopen("arq2.txt", "r");
    while ((caracter = fgetc(arquivo)) != EOF) if (caracter == 'a' || caracter == 'A') caracteres++;
    fclose(arquivo);
    printf("%d CARACTERES\n", caracteres);
}