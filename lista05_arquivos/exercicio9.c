#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("saida.txt", "w");
    FILE *arquivo2 = fopen("entrada.txt", "w");
    int opcao, matricula, telefone;
    scanf("%d", &opcao);
    if (opcao == 1) {
        do {
            scanf("%d%d", &matricula, &telefone);
            fprintf(arquivo, "%d %d\n", matricula, telefone);
        } while (matricula != -1 && telefone != -1);
    }
    else if (opcao == 2) {
        while (fscanf(arquivo2, "%d%d", &matricula, &telefone) != EOF) {
            fprintf(arquivo, "%d %d\n", matricula, telefone);
        }
    }
    fclose(arquivo);
    fclose(arquivo2);
}