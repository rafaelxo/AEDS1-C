#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void gerarDados () {
    FILE *arquivo = fopen("arqReceba.txt", "w");
    int N, lados;
    float *tam = (float *)malloc(sizeof(float));
    srand((unsigned)time(NULL));
    N = rand()%100;
    fprintf(arquivo, "%d\n", N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        lados = (rand()%2) + 3;
        fprintf(arquivo, "\n%d\n", lados);
        *tam = fmod(rand(), 10);
        fprintf(arquivo, "%.2f\n", *tam);
    }
    fclose(arquivo);
}

void editarDados (int fusuario, float ftam) {
    FILE *arquivo = fopen("arqReceba.txt", "r");
    FILE *arquivo2 = fopen("arqTemp.txt", "w");
    int N, lados, tam;
    fscanf(arquivo, "%d", &N);
    fprintf(arquivo2, "%d\n", N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        fscanf(arquivo, "%d%f", &lados, &tam);
        if (cont1 == fusuario) fprintf(arquivo2, "%d %.2f\n", lados, ftam);
        else fprintf(arquivo2, "%d %.2f\n", lados, tam);
    }
    fclose(arquivo); fclose(arquivo2);
    remove("arqReceba.txt");
    rename("arqTemp.txt", "arqReceba.txt");
}

int main () {
    FILE *arquivo = fopen("arqReceba.txt", "r");
    FILE *arquivo2 = fopen("arqResultado.txt", "w");
    int N, lados, fusuario;
    float ftam;
    float *tam = (float *)malloc(sizeof(float));
    gerarDados();
    fscanf(arquivo, "%d", &N);
    printf("\n%d figuras\n", N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        fscanf(arquivo, "%d %f", &lados, tam);
        if (lados == 3) {
            printf("\nTriangulo\n");
            printf("Area: %.2f\nPerimetro: %.2f\n", pow(*tam, 2) * sqrt(3) / 4, *tam * 3);
            fprintf(arquivo2, "\nTriangulo\n");
            fprintf(arquivo2, "Area: %.2f\nPerimetro: %.2f\n", pow(*tam, 2) * sqrt(3) / 4, *tam * 3);
        } else if (lados == 4) {
            printf("\nQuadrado\n");
            printf("Area: %.2f\nPerimetro: %.2f\n", pow(*tam, 2), *tam * 4);
            fprintf(arquivo2, "\nQuadrado\n");
            fprintf(arquivo2, "Area: %.2f\nPerimetro: %.2f\n", pow(*tam, 2), *tam * 4);
        }
    }
    printf("\nQual figura deseja alterar: ");
    scanf("%d%f", &fusuario, &ftam);
    editarDados(fusuario, ftam);
    free(tam);
    fclose(arquivo); fclose(arquivo2);
}
