#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("arq4.txt", "w");
    int linhas = 0;
    
    fclose(arquivo);
    printf(arquivo, "%d LINHAS", linhas);
}