#include <stdio.h>
#include <stdlib.h>

void conversao(int segundos) {
    int h, min, r, t;
    h = segundos/3600;
    resto = segundos%3600;
    min = resto/60;
    seg = resto%60;
    printf("\nOs segundos inseridos transformados em hora equivale a:\n%d horas : %d minutos : %d segundos", h, min, t);
}

int main() {
   int seg;
   printf("Insira os segundos para realizar a conversao:\n");
   scanf("%d", &segundos);
   conversao(seg);
}
