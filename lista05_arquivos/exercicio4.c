#include <stdio.h>
#include <stdlib.h>

int main () {
    int linhas = 0;
    char texto[100];
    FILE *arquivo = fopen("arqX.txt", "r");
    while (fgets(texto, sizeof(texto), arquivo) != NULL) {
        printf("%s", texto);
        linhas++;
    }
    fclose(arquivo);
    printf("%d LINHAS", linhas);
}