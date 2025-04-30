#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("arq1.txt", "w");
    for (int cont1 = 1; cont1 <= 10; cont1++) fprintf(arquivo, "%d\n", cont1);
    fclose(arquivo);
}