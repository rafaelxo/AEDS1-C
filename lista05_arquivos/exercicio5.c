#include <stdlib.h>
#include <stdio.h>

int main () {
    FILE *arquivo = fopen("arq5.txt", "w");
    char texto[100];
    FILE *arquivo1 = fopen("arq5E1.txt", "r");
    while (fgets(texto, sizeof(texto), arquivo1) != NULL) {
        fprintf(arquivo, "%s", texto);
    }
    flclose(arquivo1);
    fprintf(arquivo, "\n");
    FILE *arquivo2 = fopen("arq5E2.txt", "r");
    while (fgets(texto, sizeof(texto), arquivo2) != NULL) {
        fprintf(arquivo, "%s", texto);
    }
    fclose(arquivo2);
    fclose(arquivo);
}