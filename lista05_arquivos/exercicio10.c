#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
    FILE *arquivo = fopen("entrada10.txt", "w");
    float num, media = 0, menor, maior;
    srand((unsigned)time(NULL));
    for (int cont1 = 0; cont1 < 100; cont1++) {
        num = fmod(rand(), 100);
        fprintf(arquivo, "%f\n", num);
    }
    fclose(arquivo);
    arquivo = fopen("entrada10.txt", "r");
    for (int cont1 = 0; cont1 < 100; cont1++) {
        fscanf(arquivo, "%f", &num);
        media += num;
        if (cont1 == 0) {
            menor = num;
            maior = num;
        } else {
            if (num < menor) menor = num;
            if (num > maior) maior = num;
        }
    }
    fclose(arquivo);
    printf("%.2f\n%.2f\n%.2f", maior, menor, media/100);
}