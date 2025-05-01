#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("saida.txt", "w");
    int opcao, matricula, telefone;
    scanf("%d", &opcao);
    if (opcao == 1) {
        while (1) {
            scanf("%d%d", &matricula, &telefone);
            fprintf(arquivo, "%d %d\n", matricula, telefone);
        }
    } else if (opcao == 2) {
        FILE *arquivo2 = fopen("entrada.txt", "r");
        while (fscanf(arquivo2, "%d%d", &matricula, &telefone) != EOF) fprintf(arquivo, "%d %d\n", matricula, telefone);
        fclose(arquivo2);
    }
    fclose(arquivo);
}