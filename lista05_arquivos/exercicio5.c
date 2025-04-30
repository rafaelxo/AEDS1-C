#include <stdlib.h>
#include <stdio.h>

int main () {
    FILE *arquivo = fopen("arq5.txt", "w");
    FILE *arquivo1 = fopen("arq5E1.txt", "r");
    FILE *arquivo2 = fopen("arq5E2.txt", "r");
    
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo);
}