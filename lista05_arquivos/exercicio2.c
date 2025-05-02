#include <stdio.h>
#include <stdlib.h>

int main () {
    char texto[100];
    FILE *arquivo = fopen("arq2.txt", "w");
    fgets(texto, sizeof(texto), stdin);
    fputs(texto, arquivo);
    fclose(arquivo);
}