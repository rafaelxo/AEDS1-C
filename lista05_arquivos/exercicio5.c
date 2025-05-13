#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    char texto1[100], texto2[100];
    char *textao = (char*)malloc(200*sizeof(char));
    textao[0] = '\0';
    FILE *arquivo1 = fopen("arq5E1.txt", "r");
    while (fscanf(arquivo1, " %[^\n]", texto1) != EOF) {
        strcat (textao, texto1); strcat (textao, "\n");
    }
    fclose(arquivo1);
    FILE *arquivo2 = fopen("arq5E2.txt", "r");
    while (fscanf(arquivo2, " %[^\n]", texto2) != EOF) {
        strcat (textao, texto2); strcat (textao, "\n");
    }
    fclose(arquivo2);
    FILE *arquivo = fopen("arq5.txt", "w");
    fprintf(arquivo, "%s", textao);
    fclose(arquivo);
    free(textao);
}