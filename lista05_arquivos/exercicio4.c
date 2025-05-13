#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int linhas = 0;
    char texto[100];
    FILE *arquivo = fopen("arq4.txt", "r");
    while (fscanf(arquivo, " %[^\n]", &texto) != EOF) {
        printf("%s\n", texto);
        linhas++;
    }
    fclose(arquivo);
    printf("%d LINHAS\n", linhas);
}