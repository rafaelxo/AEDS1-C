#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("entrada.txt", "w+");
    int N;
    float num, media = 0, menor, maior; 
    scanf("%d", &N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        scanf("%f", &num);
        fprintf(arquivo, "%f\n", num);
        media += num;
        if (cont1 == 1) {
            menor = num;
            maior = num;
        } else {
            if (num < menor) menor = num;
            if (num > maior) maior = num;
        }
    }
    fclose(arquivo);
    printf("%.2f\n", maior);
    printf("%.2f\n", menor);
    printf("%.2f\n", media / N);
}