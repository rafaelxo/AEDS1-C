#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("arqSomaDiv.txt", "w");
    int num, soma = 0;
    scanf("%d", &num);
    for (int cont1 = 1; cont1 <= num; cont1++) {
        if (num % cont1 == 0) {
            printf("%d\n", cont1);
            soma += cont1;
        }
    }
    fprintf(arquivo, "%d", soma);
    fclose(arquivo);
}