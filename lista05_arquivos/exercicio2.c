#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char texto[100];
    FILE *arquivo = fopen("arq2.txt", "w");
    scanf(" %[^\n]", texto);
    fprintf(arquivo, "%s", texto);
    fclose(arquivo);
}