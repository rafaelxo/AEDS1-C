#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    char *texto = (char*)malloc(100*sizeof(char));
    scanf(" %[^\n]", texto);
    int tam = strlen(texto);
    char *temp = (char*)malloc(100*sizeof(char));
    char aux;
    strcpy(temp, texto);
    printf("As permutacoes da string sao:\n");
    for (int j = 0; j < tam; j++) printf("%c", *(temp + j));
    printf("\n");
    aaa
    free(texto); free(temp);
}