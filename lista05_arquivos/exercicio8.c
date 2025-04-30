#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("resultado.txt", "w");
    float veiculos, valor, faturamento, manutencao, multa;
    scanf("%f%f", &veiculos, &valor);
    faturamento = veiculos/3*valor*12;
    multa = veiculos/10*valor*0.2;
    manutencao = veiculos*0.02*600;
    fprintf(arquivo, "%.2f\n", faturamento);
    fprintf(arquivo, "%.2f\n", multa);
    fprintf(arquivo, "%.2f\n", manutencao);
    fclose(arquivo);
    printf("%.2f\n", faturamento);
    printf("%.2f\n", multa);
    printf("%.2f\n", manutencao);
}