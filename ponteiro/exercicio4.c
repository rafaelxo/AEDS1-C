#include <stdlib.h>
#include <stdio.h>

void calculaJuros (float *atual, float *ajustado, int meses) {
    *ajustado = *atual;
    for (int cont1 = 1; cont1 <= meses; cont1++) {
        *ajustado *= 1.025;
    }
}

int main () {
    float *sal_atual = (float*)malloc(sizeof(float));
    float *sal_ajustado = (float*)malloc(sizeof(float));
    int meses;
    scanf("%f%d", sal_atual, &meses);
    calculaJuros(sal_atual, sal_ajustado, meses);
    printf("%.2f\n", *sal_ajustado);
    free(sal_atual);
}